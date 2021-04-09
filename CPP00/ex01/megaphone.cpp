#include <iostream>

int				main(int argc, char *argv[])
{
	int			arg_idx;
	int			str_idx;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		arg_idx = 1;
		while (arg_idx < argc)
		{
			str_idx = 0;
			while (argv[arg_idx][str_idx])
			{
				if (argv[arg_idx][str_idx] >= 'a' && argv[arg_idx][str_idx] <= 'z')
					argv[arg_idx][str_idx] -= 32;
				str_idx++;
			}
			std::cout << argv[arg_idx];
			arg_idx++;
		}
		std::cout << std::endl;
	}
}
