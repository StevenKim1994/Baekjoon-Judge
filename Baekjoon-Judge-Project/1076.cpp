#include <iostream>
#include <string>

int main()
{
	long long sum = 0;
	int num = 0;
	long long temp = 0;
	std::string input[3];
	for (int i = 0; i < 3; ++i)
	{
		std::cin >> input[i];
	
		if (input[i] == "black")
			num = 0;

		else if (input[i] == "brown")
			num = 1;


		else if (input[i] == "red")
			num = 2;

		else if (input[i] == "orange")
			num = 3;

		else if (input[i] == "yellow")
			num = 4;

		else if (input[i] == "green")
			num = 5;

		else if (input[i] == "blue")
			num = 6;

		else if (input[i] == "violet")
			num = 7;

		else if (input[i] == "grey")
			num = 8;

		else if (input[i] == "white")
			num = 9;

		if (i == 0)
			sum = num * 10;

		else if (i == 1)
			sum += num;

		else if(i == 2)
		{
			temp = 1;
			for(int j = 0; j < num; ++j)
				temp *= 10;

			sum *= temp;
		}
	}
	std::cout << sum;
	return 0;
}