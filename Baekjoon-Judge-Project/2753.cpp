#include <iostream>

int main()
{
	short year;
	std::cin >> year;

	if (year % 4 == 0)
	{
		if (year >= 100)
		{
			if (year % 400 == 0)
				std::cout << '1';

			else if (year % 100 != 0 && year % 4 == 0)
				std::cout << '1';
			
			else
				std::cout << '0';
		}
		else
			std::cout << '1';
	}
	else
		std::cout << '0';


	return 0;
}