#include <iostream>

using namespace std;

#define FOR(i,n,m) for(int i = m; i <= n; i++)
#define FOR_Minus(i,n,m) for(int i = m; i>n; i--)

int main()
{
	int Coin_kind[15]; // 동전 종류 저장배열
	int N; // 동전의 종류의 수
	int K; // 입력된 금액
	int RESULT_COIN = 0;

	cin >> N;
	cin >> K;

	FOR(i, N, 1)
	{
		cin >> Coin_kind[i];
	}

	
		FOR_Minus(i, 0, N)
		{
			if (K >= Coin_kind[i])
			{
				RESULT_COIN += (K / Coin_kind[i]);
				K %= Coin_kind[i];
			}
		}
		
	

	cout << RESULT_COIN;


	return 0;
}