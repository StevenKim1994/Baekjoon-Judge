#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dp[3000][3000]; // LCS (Longest Common Substring != Longest Common Subsequence) 여기서는 후자의 문제이다.

int main()
{

	string input_string1;
	string input_string2;
	int max_lcs = 0;
	cin >> input_string1;
	cin >> input_string2;

	for (int i = 0; i < input_string1.size(); i++)
	{
		dp[i][0] = 0;
	}
	for (int i = 0; i < input_string2.size(); i++)
	{
		dp[0][i] = 0;
	}

	for (int i = 0; i < input_string1.size(); i++)
	{
		for (int j = 0; j < input_string2.size(); j++)
		{
			dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);

			if (input_string1[i] == input_string2[j])
			{
				dp[i+1][j+1] = dp[i][j]+1;
			}

			if (max_lcs <= dp[i+1][j+1])
			{
				max_lcs = dp[i+1][j+1];
			}
			
		}
	}
	cout << max_lcs << endl;

	return 0;
}