#include <bits/stdc++.h>

int CARD[100];

int main()
{
	int N, M;
	int max = -1;
	int sum = 0;
	
	std::cin >> N >> M;
	
	for(int i =0 ; i< N; ++i)
		std::cin >> CARD[i];

	for(int i = 0; i< N; ++i)
	{
		for(int j = 0; j < N; ++j)
		{
			for(int k = 0; k < N; ++k)
			{
				if (i == j || i == k || j == k)
					continue;

				else
				{
					sum = CARD[i] + CARD[j] + CARD[k];

					if(sum <= M)
					{
						max = std::max(sum, max);
					}
				}
			}
		}
	}

	std::cout << max;
		
	return 0;
}