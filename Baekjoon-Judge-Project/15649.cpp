#include <iostream>
#include <vector>

bool visit[9]; // 1~8까지의 수니까
std::vector<int> data;


void dfs(int _n, int _m)	
{
	if(data.size() == _m)
	{
		for(int i=0;i <_m; ++i)
		{
			std::cout << data.at(i) << " ";
		}
		std::cout << '\n';
	}
	
	for(int i =1; i<=_n; ++i)
	{
		if(visit[i] == false)
		{
			visit[i] = true;
			data.push_back(i);
			dfs(_n, _m);
			data.pop_back();
			visit[i] = false;
		}
	}
	
}

int main()
{
	int n, m;

	std::cin >> n >> m;
	dfs(n, m);

	return 0;
}