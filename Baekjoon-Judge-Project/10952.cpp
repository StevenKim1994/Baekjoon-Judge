#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	short A, B;

	while (true)
	{
		std::cin >> A >> B;
		if (A == 0 && B == 0)
			break;

		std::cout << A + B << '\n';
	}

	return 0;
}