#include <bits/stdc++.h>

int dp[1000];
int floors[1000];

int main()
{
	int num;
	int sum = 0;
	std::cin >> num;

	for(int i = 1; i<=num; ++i)
		std::cin >> floors[i];
	
	dp[1] = floors[1];

	if (num == 1)
		std::cout << dp[1];
	
	if (num >= 2)
	{
		dp[2] = dp[1] + floors[2];

		if(num == 2)
			std::cout << dp[2];
	}
	
	for(int i=3; i<=num; ++i)
		dp[i] = std::max(dp[i - 2] + floors[i], dp[i - 3] + floors[i - 1] + floors[i]);

	std::cout << dp[num];
	
	return 0;
}