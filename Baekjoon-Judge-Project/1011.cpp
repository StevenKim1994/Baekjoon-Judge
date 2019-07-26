#include <iostream>

using namespace std;

int main()
{
	int T;
	int X;
	int Y;
	int isUsedCNT = 0;
	int SelectPoint[3] = { -1, 0, 1 };
	int Position;
	cin >> T;
	

	for (int testcase = 1; testcase <= T; testcase++)
	{
		isUsedCNT = 0;
		cin >> X;
		cin >> Y;

		Position = X;

		while (true)
		{
			if (Position == Y)
				break;

			if (isUsedCNT == 0)
			{
				Position += SelectPoint[2];
				SelectPoint[0] = Position - 1;
				SelectPoint[1] = Position;
				SelectPoint[2] = Position + 1;
				isUsedCNT++;
			}
			
		
			
		}

		cout << isUsedCNT<< endl;
	}
	return 0;
}