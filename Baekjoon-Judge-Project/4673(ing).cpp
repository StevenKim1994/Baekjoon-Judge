#include <iostream>

int d(int a)
{
	int arr[5];
	int cnt = 0;
	int self = 0;
	while (true)
	{
		if (a == 0)
			break;
		
		arr[cnt] = a % 10;
		cnt++;
		a /= 10;
	}
	self += a;

	for (int i = 0; i < cnt; ++i)
		self += arr[i];

	if(self )
}

int main()
{
	for (int i = 1; i <= 10000; ++i)
	{
		std::cout << d(i) << '\n';
	}

	return 0;
}