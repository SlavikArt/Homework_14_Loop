#include <iostream>

int main()
{
	int tiers;
	int height;

	std::cout << "Enter amount of tiers: ";
	std::cin >> tiers;

	std::cout << "Enter height of tier: ";
	std::cin >> height;

	int tmp = 1 + 2 * (height - 1) // Эта формула считает ширину последнего яруса
		+ 2 * (tiers - 1); // Это необходимо что бы в дальнейшем узнать сколько пробелов поставить в каждом слое

	std::cout << "\n";

	// Яруса
	for (int i = 0; i < tiers; i++)
	{
		for (int j = 0; j < height; j++)
		{
			for (int l = 0; l < tmp; l++)
			{
				if (l >= tmp / 2 - i - j && l <= tmp / 2 + i + j)
					std::cout << "<>";
				else
					std::cout << "  ";
			}
			std::cout << "\n";
		}
	}
	// Ствол
	for (int i = 0; i < tiers; i++)
	{
		for (int j = 0; j < tmp; j++)
		{
			if (j >= tmp / 2 - tmp / height / 2 && j <= tmp / 2 + tmp / height / 2)
				std::cout << "<>";
			else
				std::cout << "  ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}