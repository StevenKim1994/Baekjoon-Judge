#include <iostream>
#include <string>

using namespace std;

int dp[1010][1010];
int main()
{
	int max_lcs = 0;
	int max = 0;
	string in;
	string A;
	string B;
	A = "z";
	B = "z";
	cin >> in;
	A = A + in;
	cin >> in;
	B = B + in;





	for (int i = 1; i < A.length(); i++)
	{
		for (int j = 1; j < B.length(); j++)
		{
			if (A[i] == B[j])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
				if (dp[i][j] >= max_lcs)
					max_lcs = dp[i][j];
			}
		}
	}


	if (A.length() >= B.length())
	{
		max = A.length() - max_lcs;
	}
	else
	{
		max = B.length() - max_lcs;
	}


	cout << max << endl;


	// string a,b에 각각을 입력받고LCS 길이를 구하고 al,bl 중 큰 값에서 LCS 길이를 빼주면될듯 19.08.03 ...

	return 0;
}