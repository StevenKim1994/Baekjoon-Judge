#include <iostream>

int main()
{
	int A, B;
	int Divide_B[3];
	int Middle[3];
	int Result = 0;
	std::cin >> A >> B;

	Divide_B[0] = B / 100;
	B = B % 100;
	Divide_B[1] = B / 10;
	B = B % 10;
	Divide_B[2] = B / 1;

	for(int i = 0 ; i <3; ++i)
		Middle[i] = A * Divide_B[i];

	for(int i = 2; i >= 0 ; --i)
		std::cout << Middle[i] << '\n';

	Middle[1] *= 10; 
	Middle[0] *= 100;

	for (int i = 2; i >= 0; --i)
		Result += Middle[i];

	std::cout << Result << '\n';
	
	return 0;
}