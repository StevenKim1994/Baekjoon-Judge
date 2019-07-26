#include <iostream>
using namespace std;

int dp[51];

int main()
{
	dp[0] = 0;
	dp[1] = 1;
	int N;

	cin >> N;

	for (int i = 2; i <= N; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[N] << endl;


	return 0;
}