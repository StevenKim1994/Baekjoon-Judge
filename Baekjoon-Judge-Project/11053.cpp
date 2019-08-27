#include <bits/stdc++.h>

int dp[1010][1010];

int main()
{
	int A_length;

	std::cin >> A_length;

	for(int i = 1; i <= A_length; ++i)
	{
		std::cin >> dp[0][i];
		dp[i][0]= dp[0][i];
	}

	//getchar();



	return 0;
}