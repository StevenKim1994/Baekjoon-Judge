#include <bits/stdc++.h>

int main()
{
	std::stack<int> input;
	int A, B;
	int count = 0;
	int temp;
	char a_str[3], b_str[3];

	std::cin >> a_str >> b_str;

	for (int i = 0; i < 3; ++i)
	}
	
	for(int i =0; i<3; ++i)
	{
		A = input.top();
		input.pop();
		A *= 10;
	}

	for(int i =0; i<3; ++i)
	{
		B = input.top();
		input.pop();
		B *= 10;
	}

	if (A > B)
		std::cout << A;

	else
		std::cout << B;
	return 0;
}