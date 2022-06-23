#include <iostream>

int main()
{
	int steps;

	std::cout << "Enter steps: ";
	std::cin >> steps;

	std::cout << "***\n";

	for (int i = 1; i <= steps; i++)
	{
		for (int h = 0; h < 2; h++)
		{
			for (int g = 0; g < i; g++)
			{
				std::cout << "  ";
			}
			if (h == 0)
				std::cout << "*\n";
			else
				std::cout << "***\n";
		}
	}
	std::cout << "\n";
}