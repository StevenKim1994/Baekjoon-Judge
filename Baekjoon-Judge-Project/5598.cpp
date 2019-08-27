#include <bits/stdc++.h>

int main()
{
	std::string input;

	std::cin >> input;

	for(int i = 0; i <input.length(); ++i)
	{
		if(input[i] >= 64 && input[i] <=90)
		{
			input[i] -= 3;

			if (input[i] == 64)
				input[i] = 90;
			
			else if(input[i] == 63)
				input[i] = 89;
			
			else if(input[i] == 62)
				input[i] = 88;
		}
	}

	std::cout << input;
	
	return 0;
}