#include <bits/stdc++.h>

int main()
{
	std::stack<int> st;
	std::string input;
	int N;
	int in;

	std::cin >> N;

	for(int i = 0; i < N; ++i)
	{
		std::cin >> input;
		
		if (input == "push")
		{
			std::cin >> in;
			st.push(in);
		}

		else if (input == "top")
		{
			if (st.size() <= 0)
				std::cout << "-1" << '\n';

			else
				std::cout << st.top() << '\n';
		}

		else if (input == "size")
			std::cout << st.size() << '\n';

		else if(input == "empty")
		{
			if (st.empty())
				std::cout << '1' << '\n';

			else
				std::cout << '0' << '\n';
		}

		else if(input == "pop")
		{
			if(!st.empty())
			{
				int a = st.top();
				std::cout << a << '\n';
				st.pop();
			}

			else
			{
				std::cout << "-1" << '\n';
				
			}
		}
		
	}

	return 0;
}