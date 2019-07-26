#include <iostream>

using namespace std;

unsigned long long dp[101];
int main()
{
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	int N;
	int testcase;

	cin >> testcase;
	for (int tc = 0; tc < testcase; tc++)
	{
		cin >> N;
		for (int i = 3; i <= N; i++)
		{
			dp[i] = dp[i - 3] + dp[i - 2];
		}

		cout << dp[N] << endl;
	}

	return 0;
}