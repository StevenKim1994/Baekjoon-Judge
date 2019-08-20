#include <bits/stdc++.h>

int main()
{
	int A, B, C, product;
	std::cin >> A >> B >> C;

	if(B >= C)
	{
		product = -1;
	}
	else
	{
		product = (A/(C-B))+1;
	}
	std::cout << product;
	
	return 0;
}