#include <iostream>
#include <vector>

long long sum(std::vector<int> &a)
{
	long long _sum = 0;
	for(int i : a)
	{
		_sum += i;
	}

	return _sum;
}

int main()
{



	return 0;
}