#include <iostream>

using namespace std;

int dp[501][501];
int input[501];
int main()
{
	int T;
	int K;
	cin >> T;
	cin >> K;
	for (int testcase = 0; testcase < T; testcase++)
	{
		for (int i = 1; i <= K; i++)
		{
			cin >> input[i];
		}

		for (int i = 1; i <= K; i++)
		{
			for (int j = 1; j <= K; j++)
			{
				if (j > K)				{
					break;
				}
				if (i == j)
				{
					dp[i][j] = 0;
					continue;
				}
				dp[i][j] = input[i] + input[j];
			}

		}

	}

	return 0;
}