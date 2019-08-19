#include <iostream>

int main()
{
	short T, A, B;
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	std::cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		std::cin >> A >> B;
		std::cout << "Case #" << i << ": " << A + B << '\n';
	}
	
	return 0;
}