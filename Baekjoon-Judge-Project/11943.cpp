#include <bits/stdc++.h>

int main()
{
	int buckets[2][2];

	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 2; ++j)
			std::cin >> buckets[i][j];

	std::cout << std::min(buckets[0][0] + buckets[1][1], buckets[0][1] + buckets[1][0]);

	return 0;
}