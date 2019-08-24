#include <bits/stdc++.h>

int dp[1010][1010];

int main()
{
	std::string input_A;
	std::string input_B;
	int min;
	
	std::cin >> input_A >> input_B;
	
	for(int i =0; i <= input_A.length(); ++i)
		dp[i][0] = i;

	for (int i = 0; i <= input_B.length(); ++i)
		dp[0][i] = i;

	min = std::min(input_A.length(), input_B.length());

	for(int i = 1; i<= input_A.length(); ++i)
	{
		for(int j = 1; j<= input_B.length() ; ++j)
		{
			if (input_A[i - 1] == input_B[j - 1])
				dp[i][j] = dp[i - 1][j - 1];

			else
				dp[i][j] =  std::min(dp[i-1][j-1],std::min(dp[i][j-1],dp[i-1][j]))+1;
		}
	}
	
	
	std::cout << dp[input_A.length()][input_B.length()];

	return 0;
}