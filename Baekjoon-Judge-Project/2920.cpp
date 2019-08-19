#include <iostream>

int main()
{
	short arr[8];
	bool check[3] = { false, false, false };
	for (int i = 0; i < 8; ++i)
	{
		std::cin >> arr[i];
		if(i >0 && i<9)
		{
			if ((arr[i]) - (arr[i - 1]) == 1)
				check[0] = true;

			else if ((arr[i-1]) - (arr[i]) == 1)
				check[1] = true;
			else
				check[2] = true;

		}
	}
	if (check[0] == true && check[2] == false)
			std::cout << "ascending";
	
	else if (check[1] == true && check[2] == false)
		std::cout << "descending";

	else if(check[2] == true)
		std::cout << "mixed";


	return 0;
}