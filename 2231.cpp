#include <iostream>
using namespace std;
#define FOR1(i, val, n)	for(int i =val; i<n; i++)
#define FOR2(i,val, n) for(int i =val; i<=n; i++)

int main()
{
	int N;
	int Create_Number_Position[10];
	int Create_Number = 1000000;
	int Position_Count = 0;
	int result;
	int answer;
	int temp;
	cin >> N;

	FOR2(i, 1, N)
	{
		temp = i;
		while (temp != 0)
		{
			Create_Number_Position[Position_Count] = (temp % 10);
			temp /= 10;
			Position_Count++;
		}

		result = i;
		FOR1(j, 0, Position_Count)
		{
			result += Create_Number_Position[j];
		}

		if (N == result)
		{
			answer = i;
			break;
		}
		else
		{
			answer = 0;
		}


		Position_Count = 0;
		FOR1(j, 0, 10)
		{
			Create_Number_Position[j] = 0;
		}
	}

	cout << answer;
	
	return 0;
}