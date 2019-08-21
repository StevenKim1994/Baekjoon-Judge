#include <bits/stdc++.h>

int main()
{
	int N , temp, result = 0;
	std::cin >> N;

	for(int i =0 ; i< N; ++i)
	{
		std::cin >> temp;
		result += temp;
	}
	std::cout << result - (N - 1);
	
	return 0;
}