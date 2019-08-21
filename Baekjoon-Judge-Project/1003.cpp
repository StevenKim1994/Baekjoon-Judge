#include <bits/stdc++.h>

int dp[1001];
bool check[1001];
int zero_cnt[1001];
int one_cnt[1001];

int main()
{
	int T, N;

	dp[0] = 0;
	dp[1] = 1;
	check[0] = true;
	check[1] = true;

	zero_cnt[0] = 1, zero_cnt[1] = 0;
	one_cnt[1] = 1, one_cnt[0] = 0;

	for(int i = 2; i <=40 ; ++i)
	{
		dp[i] = dp[i - 1] + dp[i-2];
		check[i] = true;
		zero_cnt[i] = zero_cnt[i - 1] + zero_cnt[i - 2];
		one_cnt[i] = one_cnt[i - 1] + one_cnt[i - 2];
	}
	
	std::cin >> T;

	for (int t = 1; t <=T ; ++t)
	{
		std::cin >> N;
		std::cout << zero_cnt[N] << " " << one_cnt[N] << '\n';
	}

		return 0;
}