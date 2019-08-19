#include <iostream>
#include <vector>
int main()
{
	int N;
	int temp;
	int count = 0;
	int diff = 0;
	bool check = false;
	std::vector<int> number_div;
	
	std::cin >> N;

	for(int i =1 ; i <= N; i++)
	{
		diff = 0;
		check = false;
		number_div.clear();
		
		temp = i;
		while(true)
		{
			if (temp == 0)
				break;

			number_div.push_back(temp % 10);
			temp = temp / 10;
		
		}

		if (number_div.size() == 1)
			count++;

		else
		{
			diff = number_div[1] - number_div[0]; 

				for (int j = 0; j < number_div.size(); ++j)
				{
					if (j != number_div.size() - 1)
					{
						if (diff == (number_div[j + 1] - number_div[j]))
							check = true;

						else
							check = false;
					}
				}

			if(check == true)
				count ++;
		}
	}

	std::cout << count << '\n';
	return 0;
}