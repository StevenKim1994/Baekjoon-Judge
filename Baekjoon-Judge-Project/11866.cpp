#include <bits/stdc++.h>

int main()
{
	std::list<int> input;
	std::list<int> result;
	int N, K, end;
	
	std::cin >> N >> K;
	
	for (int i = 1; i <= N; ++i)
		input.push_back(i);

	auto temp = input.begin();
	
	while(true)
	{
		if (input.empty() == true)
			break;
		
		for(int i =0; i< K -1; ++i)
		{
			temp++;
			if (temp == input.end())
				temp = input.begin();
		}

		result.push_back(*temp);
		temp = input.erase(temp);

		if (temp == input.end())
			temp = input.begin();
	}

	end = result.back();
	result.pop_back();
	
	std::cout << "<";
	for (auto i = result.begin(); i != result.end(); ++i)
		std::cout << *i << ", ";
	
	std::cout << end << ">";
	
	return 0;
}