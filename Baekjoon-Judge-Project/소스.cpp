#include <bits/stdc++.h>

int main()
{
	int T;
	int bb, pp, ff; // bb : 빵 개수 , pp, 쇠고기 개수 , ff 치킨개수 
	int hh, cc; // hh : 햄버거 가격, cc : 치킨버거 가격
	int result = 0;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		std::cin >> bb >> pp >> ff;
		std::cin >> hh >> cc;
		result = 0;
		if (cc >= hh) // 치킨이 더비살떄
		{
			while (true)
			{
				if (ff >= 1 && bb >= 2)
				{
					result += cc;
					ff -= 1;
					bb -= 2;
				}
				else
					break;

			}

			while (true)
			{
				if (pp >= 1 && bb >= 2)
				{
					result += hh;
					pp -= 1;
					bb -= 2;
				}
				else
					break;
			}
		}

		else if (cc < hh) //햄버거가 더비살때
		{
			while (true)
			{
				if (pp >= 1 && bb >= 2)
				{
					result += hh;
					pp -= 1;
					bb -= 2;
				}
				else
					break;
			}


			while (true)
			{
				if (ff >= 1 && bb >= 2)
				{
					result += cc;
					ff -= 1;
					bb -= 2;
				}
				else
					break;

			}
		}

		std::cout << result << '\n';

	}
	return 0;
}