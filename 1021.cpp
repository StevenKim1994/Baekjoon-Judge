#include <iostream>
#include <deque>
#include <queue>
using namespace std;

int main()
{
	deque<int> input_data;
	queue<int> pick_data;
	int N;
	int M;
	int pick;
	int cnt = 0;
	int position = 0;
	cin >> N;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> pick;
		pick_data.push(pick);
	}

	for (int i = 1; i <= N; i++)
		input_data.push_back(i);

	while (true)
	{
		position = 0;

	
		if (pick_data.size() == 0)
		{
			cout << cnt << endl;
			break;
		}

		while (true)
		{
			if (input_data.at(position) == pick_data.front())
			{
				break;
			}
			else
			{
				position++;
			}
		}

		if (position > (input_data.size() / 2))
		{
			while (true)
			{
				if (input_data.front() == pick_data.front())
				{
					input_data.pop_front();
					pick_data.pop();
					break;
				}

				else
				{
					input_data.push_front(input_data.back());
					input_data.pop_back();
					cnt++;
				}
			}
		}

		else
		{
			while (true)
			{
				if (input_data.front() == pick_data.front())
				{
					input_data.pop_front();
					pick_data.pop();
					break;
				}
				else
				{
					input_data.push_back(input_data.front());
					input_data.pop_front();
					cnt++;
				}
			}
		}
	}
	return 0;
}