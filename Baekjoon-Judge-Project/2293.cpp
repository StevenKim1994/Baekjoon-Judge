#include <bits/stdc++.h>

#define INF 99999

std::vector<int> coins;
int dp[1000001];
bool ready[1000001];

//int solve(int _in)
//{
//	dp[0] = 0;
//
	
	
	/*
	if (_in < 0)
		return INF;

	if (_in == 0)
		return 0;

	if (ready[_in])
		return dp[_in];

	
	int best = INF;
	
	for(int c : coins)
		best = std::min(best, solve(_in - c) + 1);
		
	ready[_in] = true;
	dp[_in] = best;
	
	if (best > _in)
		return -1;
	
		return best;*/
//}

int main()
{
	int n, k;
	int count = 0;
	int temp = 0;
	std::cin >> n >> k;
	
	for (int i = 0; i < n; ++i)
	{
		std::cin >> temp;
		coins.push_back(temp);
	}

	dp[0] = 0;
	for(int i =1; i<=k; ++i)
	{
		dp[i] = INF;
		for(int c : coins)
		{
			if (i - c >= 0)
			{
				dp[i] = std::min(dp[i], dp[i - c] + 1);
				ready[i] = true;
			}
				
		}
	}
	
	count = dp[k];
	

	if (k == 0)
		std::cout << "0";
	else if (ready[k] != true || count == INF) // count == INF를 안하면 왜 오답이 뜨는지 분석하기... 일단 이거 처리하니까 답나옴... // INF면 초기값 즉 경우의 수를 찾지 못했다는의미였당
	std::cout << "-1";
	else
		std::cout << count;

	return 0;
}