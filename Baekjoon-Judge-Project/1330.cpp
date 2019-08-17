#include <iostream>

int main()
{
	short int point;
	std::cin >> point;

	if (point >= 90 && point <= 100)
		std::cout << 'A';

	else if (point >= 80 && point <= 89)
		std::cout << 'B';

	else if (point >= 70 && point <= 79)
		std::cout << 'C';

	else if (point >= 60 && point <= 69)
		std::cout << 'D';

	else
		std::cout << 'F';

	return 0;
}