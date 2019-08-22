#include <bits/stdc++.h>

int wine[20000];
int dp[20000];

int main()
{
	int N;
	std::cin >> N;

	for (int i = 1; i <= N; ++i)
		std::cin >> wine[i];

	dp[1] = wine[1];

	if (N > 1)
		dp[2] = dp[1] + wine[2];


	
	for(int i = 3; i<= N; ++i)
	{
		dp[i] = std::max(dp[i - 1], std::max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2]+ wine[i]));
	}
	

	std::cout << dp[N];
	return 0;
}