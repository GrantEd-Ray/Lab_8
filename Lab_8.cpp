#include "pch.h"
#include <iostream>

int main()
{
	long long a = 1000;
	long long *b = &a;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	unsigned char* pointer = (unsigned char*)b;

	std::cout << &pointer << std::endl;

	for (int i = 0; i < sizeof(long long); i++)
	{
		std::cout << (int)*(pointer + i) << " ";
	}
}
