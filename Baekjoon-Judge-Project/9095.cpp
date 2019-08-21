#include <bits/stdc++.h>

int dp[20];

int main()
{
	int n , t;
	std::cin >> t;

	dp[0] = 0;
	dp[1] = 1; // 1 - > 1 °³
	dp[2] = 2;// 1 + 1 / 2 - > 2 °³
	dp[3] = 4; //1 + 1 + 1 / 2 + 1 / 1 + 2 / 3 - > 4 °³ 
	

	for (int i = 4; i <= 11; ++i)                      
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	
	
	for (int i = 0; i < t; ++i)
	{
		std::cin >> n;
		std::cout << dp[n] << '\n';
	}
	
	return 0;
}