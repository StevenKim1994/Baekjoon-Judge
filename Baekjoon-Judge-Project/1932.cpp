#include <bits/stdc++.h>

long long triangle[1000][1000];
long long dp[1000][1000];

int main()
{
	int n;
	long long max = -1;
	
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			std::cin >> triangle[i][j];
		}
	}
	
		dp[2][1] += triangle[1][1] + triangle[2][1];
		dp[2][2] += triangle[1][1] + triangle[2][2];
	
	for(int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			if (i == 1 && j == 1)
				continue;

			if (dp[i + 1][j] < triangle[i + 1][j] + dp[i][j])
				dp[i + 1][j] = triangle[i + 1][j] + dp[i][j];

			if (dp[i + 1][j + 1] < triangle[i + 1][j + 1] + dp[i][j])
				dp[i + 1][j + 1] = triangle[i + 1][j + 1] + dp[i][j];
			
		}
	}

	for(int i = 1; i <=n; ++i)
	{
		if (max <= dp[n][i])
			max = dp[n][i];
	}

	if (n == 1)
		max = triangle[1][1];


	std::cout << max;
	
	return 0;
}