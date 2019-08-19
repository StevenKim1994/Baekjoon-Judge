#include <iostream>

int main()
{
	short arr[10];
	short max = 0;
	short max_arr = 0;
	for(int i = 1; i <= 9; ++i)
	{
		std::cin >> arr[i];
		if(arr[i] >= max)
		{
			max = arr[i];
			max_arr = i;
		}
	}
	std::cout << max << '\n' << max_arr;
	return 0;
}