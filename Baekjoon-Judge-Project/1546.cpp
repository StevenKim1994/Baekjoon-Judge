#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
int main()
{
	std::vector<double> arr;
	std::vector<double> res;
	double temp = 0.0;
	double max = 0.0;
	double max_f = 0.0;
	short N;;
	double avg = 0.0;
	std::cin >> N;

	for(int i = 0; i < N; ++i)
	{
		scanf("%lf", &temp);
		arr.push_back(temp);
	}
	max = *std::max_element(arr.begin(), arr.end());
	max_f = max;
	res.push_back(max_f);
	for(int i= 0; i < N; ++i)
	{
				
			temp = arr.at(i) / max * 100;
			res.push_back(temp);
			avg += temp;
		
	}
	double N_f = 0.0;
	N_f = N;
	//std::cout << avg / N_f << '/n';
	printf("%.2lf", avg/N_f);
	return 0;
}