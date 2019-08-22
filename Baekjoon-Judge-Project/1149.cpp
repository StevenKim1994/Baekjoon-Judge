#include <bits/stdc++.h>

int dp[1000][5];

int main()
{
	int N;
	int red = 0, blue = 0, green = 0;
	int result = 0;
	std::cin >> N;
	for (int i = 1; i <= N; ++i)
		dp[0][i] = 0;

	for (int i = 1; i <= N; ++i)
	{
		std::cin >> dp[i][1];
		std::cin >> dp[i][2];
		std::cin >> dp[i][3]; // 1 : »¡°­ 2 :ÆÄ¶û 3 : ÃÊ·Ï
	}

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 1; j <= 3; ++j)
		{
			if (j == 1)
			{
				dp[i][1] = std::min(dp[i - 1][2], dp[i - 1][3]) + dp[i][1];
			}
			else if (j == 2)
			{
				dp[i][2] = std::min(dp[i - 1][1], dp[i - 1][3]) + dp[i][2];
			}
			else
			{
				dp[i][3] = std::min(dp[i - 1][2], dp[i - 1][1]) + dp[i][3];
			}
		}
	}

	std::cout << std::min(dp[N][1], std::min(dp[N][2], dp[N][3]));
	
	return 0;
}