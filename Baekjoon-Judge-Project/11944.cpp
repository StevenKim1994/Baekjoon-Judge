#include <bits/stdc++.h>

int main()
{
	std::string collection;
	std::string N_string;
	int N, M;

	std::cin >> N >> M;

	N_string = std::to_string(N);

	for(int i=0; i < N; ++i)
	{
		collection += N_string;

		if(collection.length()  >= M)
		{
			for (int j = 0; j < M; ++j)
				std::cout << collection[j];

			break;
		}
	}

	if (collection.length() < M)
	{
		for (int j = 0; j < collection.length(); ++j)
			std::cout << collection[j];
	}
	
	return 0;
}