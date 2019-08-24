#include <bits/stdc++.h>


short collection[10001];

int main()
{

	std::ios_base::sync_with_stdio(false);
	
	int N, input;
	int max = -1;
	std::cin >> N;

	for(int i = 0 ; i < N; ++i)
	{
		std::cin >> input;
		collection[input]++;
		if (input >= max)
			max = input;
	}

	for (int i = 0; i < max; ++i)
	{
		if (collection[i] == 0)
			continue;
		
		for (int j = 0; j < collection[i]; ++j)
			std::cout << i << '\n';
	}

	return 0;
}