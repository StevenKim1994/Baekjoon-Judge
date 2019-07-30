#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int dp[3000][3000];

int main()
{
	string A;
	string B;
	int A_idx;
	int B_idx;
	// 내가 생각한 방법 ? : Longest Common Substring 을 구한다음 A의 substring 시작 인덱스와 B의 substring 시작 인덱스를 비교하여 그 값 만큼 * 2를 더한다.
	
	cin >> A;
	cin >> B;

	for (int i = 1; i < A.length(); i++)
	{
		for (int j = 1; j < B.length(); j++)
		{
			if (A[i] == B[j])
			{

			}
		}
	}
	
	return 0;
}