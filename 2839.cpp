#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int bag3[2000];
int bag5[2000];

int main()
{
	int N;
	int bag5cnt = 0;
	int bag3cnt = 0;
	int answer = 0;
	int answer2 = -999999;
	int temp_plus = 0;
	int cnt = 0;
	bool check = false;
	bool check2 = false;
	int memo1= 0;
	cin >> N;

	if (N % 5 == 0)
	{
		answer = N / 5;
		memo1 = answer;
		check = true;
	}
	else if (N % 3 == 0)
	{
		answer = N / 3;
		memo1 = answer;
		check = true;
		
	}
	
		while (true)
		{

			bag5cnt++;
			temp_plus = 0;
			temp_plus += (5 * bag5cnt);
			
			if (temp_plus > N)
			{
				check2 = true;
				
				break;
			}

			if (temp_plus == N)
			{
				bag3[cnt] = bag3cnt;
				bag5[cnt] = bag5cnt;

				if (memo1 > bag3[cnt] + bag5[cnt])
					answer2 = memo1;

				else
					answer2 = bag3[cnt] + bag5[cnt];


				break;
			}
			while (true)
			{

				bag3cnt++;
				temp_plus += 3;

				if (temp_plus == N)
				{
					bag3[cnt] = bag3cnt;
					bag5[cnt] = bag5cnt;
					memo1 = bag3[cnt] + bag5[cnt]; 
				
					break;
				}

				else if (temp_plus > N)
				{
					
					temp_plus = 0;
					bag3cnt = 0;
				
					break;
				}

			}
			cnt++;
		}

		if ((answer > answer2) && (answer2 > 0) && (answer != 0))
		{
			cout << answer2 << endl;
		}
		else if (answer == 0 && answer2 == 0)
		{
			cout << "-1" << endl;
		}
		else if ((answer > answer2) && (answer2 < 0) && (answer != 0))
		{
			if ((memo1 > answer) && (answer != 0) )
				cout << answer << endl;

			else
				cout << memo1 << endl;
		}
		else if ((answer > answer2) && (answer2 > 0) && (answer != 0))
		{
			cout << answer2 << endl;
		}
		else if ((answer < answer2) && (answer2 > 0) && (answer != 0))
		{
			if ((memo1 > answer) && (answer != 0))
				cout << answer << endl;

			else
				cout << memo1 << endl;
		}

		else if (answer == 0 && answer2 > 0)
		{
			cout << answer2 << endl;
		}

		else if ((memo1 > answer) && (answer != 0))
			cout << answer << endl;

		else if ((memo1 > answer) && (answer == 0))
			cout << memo1 << endl;

		else if ((memo1 == answer) && (answer != 0))
		{
			cout << memo1 << endl;
		}
		
		else
		{
			cout << "-1" << endl;
		}

	

	return 0;
}