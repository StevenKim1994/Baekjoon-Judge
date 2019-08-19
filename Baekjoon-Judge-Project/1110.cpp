#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	short N, a, b, c, count = 0;
	short answer = 0, d, e =0,f =0;
	std::cin >> N;
	c = N;

	if (c < 10)
	{
		a = 0;
		b = c;
	}

	else
	{
		a = N / 10;
		b = N % 10;
		
	}
	
	while (true)
	{
		if (N == 0)
		{
			count = 1;
			break;
		}
		if (N == f)
			break;
		
		if (count > 0)
		{
			if(f < 10)
			{
				a = 0;
				b = f;
			}
			else
			{
				a = f / 10;
				b = f % 10;
			}
		}
		
		count++;
		c = a + b;
		d = c % 10;
		answer = b + d;
		f = b * 10;
		f += d;
	
	}

	std::cout << count;
	
	return 0;
}