#include <iostream>

int main()
{
	int* p = new int(100);
	long c = reinterpret_cast<long> (p);
	printf("%ld ", c);

	int* temp = reinterpret_cast<int *>(c);
	printf("%d ", *temp);

	return (0);
}
