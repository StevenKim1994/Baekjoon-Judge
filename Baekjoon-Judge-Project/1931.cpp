#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
	vector<pair<int, int>> reserve;
	int N;
	int First, Second;
	int Max = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> First;
		cin >> Second;
		
		reserve.push_back(make_pair(First, Second));
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

		}
	}



	return 0;
}