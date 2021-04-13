#include <iostream>
#include <fstream>

void			printError(int tag)
{
	if (tag == 1)
		std::cout << "Argument Error : try ./replace [file] [string] [string]" << std::endl;
	else if (tag == 2)
		std::cout << "String Error : Emty String" << std::endl;
	else if (tag == 3)
		std::cout << "File Error : File open error" << std::endl;
	else if (tag == 4)
		std::cout << "File Error : File make error" << std::endl;
}

static void			replaceLine(std::string& line, std::string s1, std::string s2)
{
	std::size_t start = 0;
	while (true)
	{
		std::size_t found = line.find(s1, start);

		if (found != std::string::npos)
		{
			line.replace(found, s1.length(), s2);
			start = found + s2.length();
		}
		else
		{
			break ;
		}
	}
}

int				main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printError(1);
		return (1);
	}

	std::string		filename(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);

	if (s1.empty() || s2.empty())
	{
		printError(2);
		return (2);
	}

	std::ifstream	ifs(filename);

	if (!(ifs.is_open()))
	{
		printError(3);
		return (3);
	}
	std::ofstream	ofs(filename + ".replace", std::ofstream::out | std::ofstream::trunc);
	if (!(ofs.is_open()))
	{
		printError(4);
		return (4);
	}
	while (true)
	{
		std::string	line;
		getline(ifs, line);
		replaceLine(line, s1, s2);
		ofs << line;
		if (ifs.eof())
			break ;
		else
			ofs << '\n';
	}
	std::cout << "Complete replace" << std::endl;
	return (0);
}
