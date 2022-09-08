#include <iostream>

/*
   At fib[47] the fibbonacci number outputted becomes negative instead of becoming
   a bigger positive number. This probably happens because the number is exceeding
   the int limit of 2147483647. I think we could avoid this issue by using long int
   which has a higher range. 

*/

int main()
{
	int fib[60];

	fib[0] = 0;
	std::cout << fib[0] << "\n";
	fib[1] = 1;
	std::cout << fib[1] << "\n";

	for (int i = 2; i < 60; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
		std::cout << fib[i] << "\n";
	}
}

