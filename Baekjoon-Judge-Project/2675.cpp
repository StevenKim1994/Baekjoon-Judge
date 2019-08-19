#include <iostream>
#include <string>
int main()
{
	int T;
	int R;
	std::string input;
	
	std::cin >> T;

	for(int i = 0; i < T; ++i)
	{
		std::cin >> R;
		std::cin >> input;

		for(int j =0; j < input.length(); ++j)
		{
			for (int k = 0; k < R; ++k)
				std::cout << input[j];
		}
		std::cout << '\n';
		
	}
	return 0;
}