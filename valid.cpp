#include <iostream>
#include <cmath>

int main()
{
	int num;

	std::cout <<  "Enter a number: ";
	std::cin >> num;

	while (num < 0 || num > 100)
	{
		std::cout <<  "Please re-enter: ";
		std::cin >> num;
	}

	std::cout << "Number squared is " << sqrt(num) <<  std::endl;

}
