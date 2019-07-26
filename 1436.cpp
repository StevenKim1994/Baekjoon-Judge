#include <iostream>
#include <string>
using namespace std;

#define FOR(i, n) for(int i = 0; i <= n; i++)

int main()
{
	int N;
	int CNT = 0;
	string int_to_string;
	int answer = 0;
	int i = 666;
	int N_count = 0;
	cin >> N;

	
	while(true)
	{
		
		int_to_string = to_string(i);
		CNT = 0;
		N_count = 0;
		FOR(j, int_to_string.size() - 1)
		{
		
			if (j + 1 < int_to_string.size() && int_to_string[j] == '6')
			{
				if (int_to_string[j] == int_to_string[j + 1])
				{
					CNT++;
				}
				else
				{
					CNT = 0;
				}

				if (CNT == 3)
				{
					CNT = 0;
					N_count++;
					break;
				}
			}
		
		}

		if (N_count == N)
		{
			i--;
			answer = i;
			break;
		}

		
		i++;
		
	}
	
	cout << answer;

	return 0;
}