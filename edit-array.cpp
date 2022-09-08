#include <iostream>

bool update_array(int array[10])
{
	int index, val;

	std::cout << "\n" << "Input index: ";
	std::cin >> index;

	std::cout  << "Input value: ";
	std::cin >> val;

	if (index < 10 && index >= 0)
	{
		array[index] = val;
		return true;
	}
	else
	{
		std::cout << "Index out of range. Exit \n";
		return false;
	}
}

void print_array(int array[10])
{
	std::cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << "\n";
}

int main()
{
	int myData[10];
	bool cont = true;

	for (int i = 0; i < 10; i++)
	{
		myData[i] = 1;
	}

	while (cont == true)
	{
		print_array(myData);
		cont = update_array(myData);
	} 
}
