#include <bits/stdc++.h>

char matrix[100][100];
char W_matrix[100][100];
char B_matrix[100][100];

int main()
{
	int N, M, w_min_value = 0, b_min_value= 0;

    	
	std::cin >> N >> M;
	
	for(int i =0; i < N; ++i)
	{
		for (int j = 0; j < M ; ++ j)
		{
			std::cin >> matrix[i][j];
		}
	}

	for(int i = 0; i< N ; ++i)
	{
		for(int j = 0 ; j< M; ++j)
		{
			if (i % 2 == 0 && j % 2 == 0)
			{
				B_matrix[i][j] = 'B';
				W_matrix[i][j] = 'W';
			}
			else if (i % 2 == 1 && j % 2 == 1)
			{
				B_matrix[i][j] = 'B';
				W_matrix[i][j] = 'W';
			}
			else
			{
				B_matrix[i][j] = 'W';
				W_matrix[i][j] = 'B';
			}
		}
	}

	for(int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (B_matrix[i][j] != matrix[i][j])
				b_min_value++;

			if (W_matrix[i][j] != matrix[i][j])
				w_min_value++;
		}
	}

	if (b_min_value > N*M)
		std::cout <<  - b_min_value;

	else
		std::cout << b_min_value;
	
	return 0;
}