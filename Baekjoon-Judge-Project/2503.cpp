#include <bits/stdc++.h>

int main()
{
	int number;
	std::vector<std::string> numbers;
	std::string temp;
	int count = 0;

	for(int i =1; i <=9; ++i)
	{
		for(int j = 1; j<=9; ++j)
		{
			for(int k= 1; k <= 9; ++k)
			{
				if (i == j || j == k || k == i)
				{
					continue;
				}
					number = (i * 100) + (j * 10) + (k * 1);	
					temp = std::to_string(number);
					numbers.push_back(temp);
			}
		}
	}

	for (auto i : numbers)
	{
		
	}

	return 0;
}