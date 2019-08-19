#include <iostream>
#include <vector>
int main()
{
	int C;
	int N;
	int temp;
	double avg = 0.0;
	double persent = 0.0;
	double result = 0.0;
	std::vector<int> student;
	std::cin >> C;

	for(int i =0; i< C; ++i)
	{
		std::cin >> N;

		for(int j = 0; j < N; ++j)
		{
			std::cin >> temp;
			student.push_back(temp);
			avg += temp;
		}
		avg = avg / N;
		persent = (double)100 / (double)N;
	   for(int j = 0; j<N ;++j)
	   {
		   if (avg < student.at(j))
			   result += persent;
	   }
	   std::cout.precision(3);
	   std::cout << std::fixed << result <<'%' << '\n';
	   result = 0.0;
	   student.clear();
	   avg = 0.0;
	   persent = 0.0;
	}
	return 0;
}