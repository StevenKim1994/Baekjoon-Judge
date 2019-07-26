#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	int K;
	int v_check_point = 0;
	int check_point = 0;
	vector<int> input_arr;
	vector<int> answer_arr;

	cin >> N;
	cin >> K;

	for (int i = 1; i <= N; i++)
		input_arr.push_back(i);

	while (true) 
	{
		if (input_arr.size() == 0)
			break;

		else
		{
			v_check_point = (check_point + K - 1) % input_arr.size();
			answer_arr.push_back(input_arr.at(v_check_point));
			input_arr.erase(input_arr.begin() + v_check_point);
			check_point = v_check_point;
		}
			
	}

	cout << "<";
	for (int i = 0; i < answer_arr.size()-1; i++)
	{
		cout << answer_arr.at(i) << ", ";
	}
	cout << answer_arr.back();
	cout << ">";
	return 0;


}
