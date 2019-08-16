#include <iostream>

int main()
{
	int A, B;
	int Divide_B[3];
	int Middle[3];
	std::cin >> A >> B;

	Divide_B[0] = B / 100;
	B = B % 100;
	Divide_B[1] = B / 10;
	B = B % 10;
	Divide_B[2] = B / 1;

	for (int i : Divide_B)
	{
		Middle[i] = A * Divide_B[i];
		std::cout << Middle[i] << std::endl;
	}
	return 0;
}