#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

vector<pair<int,int> > Applicant;
bool Applicant_Pass[1000000];

bool compare(pair<int,int> _a, pair<int,int> _b)
{
	if (_a.first < _b.first)
		return true;

	else
		return false;
}
int main()
{
	int T;
	int N;
	int Pass_Num;
	pair<int, int> temp;

	cin >> T;
	for (int testcase = 0; testcase < T; testcase++) 
	{
		int non_pass = 0;
		Applicant.clear();
		cin >> N;
		Pass_Num = N;
		for (int i = 0; i < N; i++)
		{
			cin >> temp.first;
			cin >> temp.second;
			Applicant.push_back(temp);
		}
		
		sort(Applicant.begin(), Applicant.end(), compare);

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < Applicant[i].first-1; j++)
			{
				if (i == j)
					continue;

				if ((Applicant[i].second > Applicant[j].second) && (Applicant[i].first > Applicant[j].first))
				{
					Applicant_Pass[i] = true;
					non_pass++;
					break;
				}
				else
				{
					Applicant_Pass[i] = false;
					
				}
				
			}
		}
		cout << Pass_Num - non_pass << endl;

	}
	// 왜 시간초과가 뜰까 ? 19.08.06...

	return 0;
}