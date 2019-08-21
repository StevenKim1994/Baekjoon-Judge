#include <bits/stdc++.h>

int main()
{
	long long A, B, C;
	long long result = 0;

	std::cin >> A >> B >> C;

	result = 1;
	while(true)
	{
		if (B == 0)
			break;

		if (B % 2 == 1)
		{
			result *= A;
			result %= C;
		}
		A = ((A%C) * (A%C))%C;
		B /= 2;
	
	}
	
	std::cout << result << '\n';
	
	return 0;
}