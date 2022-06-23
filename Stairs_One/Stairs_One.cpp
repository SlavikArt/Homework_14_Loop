#include <iostream>

int main()
{
	int steps;
	int width;

	std::cout << "Enter width: ";
	std::cin >> width;

	std::cout << "Enter steps: ";
	std::cin >> steps;

	std::cout << "\n";

	for (int i = 0; i < steps; i++)
	{
		for (int g = 0; g < i; g++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < width; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}