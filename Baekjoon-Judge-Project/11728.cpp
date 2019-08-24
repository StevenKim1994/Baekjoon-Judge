#include <bits/stdc++.h>

std::vector<int> input;

int main()
{
	int N, M,temp;
	std::cin >> N >> M;

	for (int i = 0; i < N + M; ++i)
	{
		std::cin >> temp;
		input.push_back(temp);
	}
	
	std::stable_sort(input.begin(), input.end());

	for (auto i : input)
		std::cout << i << " ";
	
	return 0;
}