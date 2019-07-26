#include <iostream>
using namespace std;
#define FOR(i,n) for(int i = 0; i<(n);i++)
int main()
{
	char CHESS_BOARD[8][8];
	int count = 0;

	FOR(i,8)
	{
		FOR(j,8)
		{
			cin >> CHESS_BOARD[i][j];

			if (((i % 2 == 0) && (j % 2 == 0)) || ((i%2 ==1) &&(j %2 ==1)) )
			{
				if (CHESS_BOARD[i][j] == 'F')
				{
					count++;
				}
			}
		}
	}
	cout << count;

	return 0;
}