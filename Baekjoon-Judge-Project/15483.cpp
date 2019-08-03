#include <iostream>
#include <string>

using namespace std;

int dp[1010][1010];
int main()
{
	int max_lcs = 0;
	int max = 0;
	string A;
	string B;

	cin >> A;
	cin >> B;
	
	

	if (A.length() >= B.length())
	{
		
		for (int i = 0; i < B.length(); i++)
		{
			if (A[i] != B[i])
			{
				max++;
			}
		}

		max = max + (A.length() - B.length());
	}

	else
	{
		for (int i = 0; i < A.length(); i++)
		{
			if (A[i] != B[i])
			{
				max++;
			}
		}
		max = max + (B.length() - A.length());

		
	for (int i = 1; i < A.length(); i++)
	{
		for (int j = 1; j < B.length(); j++)
		{
			if (A[i] == B[j])
			{
				dp[i][j] = dp[i-1][j - 1] + 1;
				if (dp[i][j] >= max_lcs)
					max_lcs = dp[i][j];
			}
		}
	}
	max = max - (max_lcs+1);
	
	}
	 

	cout << max << endl;


	// string a,b에 각각을 입력받고LCS 길이를 구하고 al,bl 중 큰 값에서 LCS 길이를 빼주면될듯 19.08.03 ...

	return 0;
}