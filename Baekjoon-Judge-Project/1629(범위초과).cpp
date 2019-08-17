#include <iostream>

int main()
{
	int A, B, C;
	long long SUM = 0;
	std::cin >> A >> B >> C;
	SUM = A;
	for (int i = 0; i < B; ++i)
		SUM *= A;

	std::cout << SUM % C;

	return 0;
}