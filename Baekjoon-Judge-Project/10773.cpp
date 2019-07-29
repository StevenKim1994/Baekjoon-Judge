#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<unsigned long long> input_stack;
	int K;
	unsigned long long  input_data;
	unsigned long long  SUM_RESULT = 0;
	cin >> K;
	
	for (int i = 0; i < K; i++)
	{
		cin >> input_data;

		if (input_data == 0)
		{
			if (input_stack.size() != 0)
			{
				input_stack.pop();
			}
		}
		else
		{
			input_stack.push(input_data);
		}
	}
	
	
		while (true)
		{
			if (input_stack.size() == 0)
				break;

			SUM_RESULT += input_stack.top();

			if(input_stack.size() != 0)
				input_stack.pop();
		}
	

	cout << SUM_RESULT << endl;




	return 0;
}