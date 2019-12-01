#include <iostream>

bool check[10001]; // 1~10000번까지 만약 해당 인덱스가 생성자 (해당수와 자리수를 하나씩 더해서 만들수 있는 수) 가 될수 있는 수면 해당 인덱스 True시킴

int d(int _idx)
{
	int sum = _idx;

	sum += _idx / 10000;
	_idx = _idx % 10000;

	sum += _idx / 1000;
	_idx = _idx % 1000;

	sum += _idx / 100;
	_idx = _idx % 100;

	sum += _idx / 10;
	_idx = _idx % 10;

	sum += _idx / 1;
	_idx = _idx % 1;

	return sum;
}

int main()
{
	int idx;
	for(int i = 1; i <=10000; i++)
	{
		idx = d(i);

		if(idx > 0)
		{
			check[idx] = true;
		}
	}

	for(int i =1; i <=10000; i++)
	{
		if(check[i] == false)
		{
			std::cout << i << '\n';
		}
	}


	return 0;
}