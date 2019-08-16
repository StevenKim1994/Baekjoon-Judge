#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	int input;
	cin >> N;
	vector<int> sequence;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		sequence.push_back(input);
	}
	
	for (int element : sequence)
	{
		cout << element << " ";
	}
	cout << "\n";




	return 0;
}