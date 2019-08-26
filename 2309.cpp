#include <bits/stdc++.h>

int main()
{
	int dwarf[10];
	std::vector<int> answer;
	int sum = 0;

	for (int i = 1; i <= 9; ++i)
		std::cin >> dwarf[i];


	for (int a =1; a <= 9; ++a)
	{
		for (int b = 1; b <= 9; ++b)
		{
			if (a == b)
				continue;

			for (int c = 1; c <= 9; ++c)
			{
				if (b == c || a == c || a == b)
					continue;

				for (int d = 1; d <= 9; ++d)
				{
					if (a == b || a == c || a == d || b == c || b == d || c == d )
						continue;

					for (int e = 1; e <= 9; ++e)
					{
						if (a == b || a == c || a == d || a == e||  b == c || b == d || b == e || c == d || c == e || d == e)
							continue;

						for (int f = 1; f <= 9; ++f)
						{
							if (a == b || a == c || a == d || a == e || a==f || b == c || b == d || b == e || b == f ||  c == d || c == e || c ==f || d == e || d==f ||e == f)
								continue;
							for (int g = 1; g <= 9; ++g)
							{
								if(a == b || a == c || a == d || a == e || a == f || a == g || b == c || b == d || b == e || b == f || b == g || c == d || c == e || c == f || c == g || d == e || d == f || d == g || e == f || e == g || f == g)
									continue;

								sum = dwarf[a] + dwarf[b] + dwarf[c] + dwarf[d] + dwarf[e] + dwarf[f] + dwarf[g];
								if (sum == 100)
								{
									answer.push_back(dwarf[a]);
									answer.push_back(dwarf[b]);
									answer.push_back(dwarf[c]);
									answer.push_back(dwarf[d]);
									answer.push_back(dwarf[e]);
									answer.push_back(dwarf[f]);
									answer.push_back(dwarf[g]);
									goto END;
									
								}
								
									

							}
							
						}
						
					}
					
				}
				
			}
			
		}
		
	}

	END:
	std::sort(answer.begin(), answer.end());

	for (auto i : answer)
		std::cout << i << '\n';

	return 0;
}