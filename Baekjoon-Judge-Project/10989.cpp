#include <bits/stdc++.h>

int main()
{
	int N;
	short temp;
	std::vector<short> collection;
	
	std::cin >> N;
	
	for(int i = 0 ; i < N ; ++i)
	{
		std::cin >> temp;
		collection.push_back(temp);
	}

	std::sort(collection.begin(), collection.end());

	for (short i : collection)
		std::cout << i << '\n';

	collection.clear();
	
	return 0;
}