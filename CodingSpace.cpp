#include <iostream>

using namespace std;


int main()
{
	
	int C; // TestCase
	int H, W; // H * W 크기의 격자를 정하기위한 변수
	char BOARD[21][21]; // 게임판
	int WHITE = 0;
	int BLACK = 0;
	int MAX_SIZE;
	
	cin >> C;

	for (int TestCase = 0; TestCase < C; TestCase++)
	{
		// TestCase 
		cin >> H;
		cin >> W;
		for (int height = 0; height < H; height++)
		{
			// Height
			for (int weight = 0; weight < W; weight++)
			{
				// Weight
				cin >> BOARD[height][weight]; // #: 검은칸 .: 흰칸
				if (BOARD[height][weight] == '#')
					BLACK++;

				else if (BOARD[height][weight] == '.')
					WHITE++;
			}
		}

		if (WHITE % 3 != 0) // 예외1 :  L자 (3칸짜리) 로 흰칸을 모두 덮어야하며 게임판을 나가면 안되므로 흰칸의 수가 3의 배수가 아니면 무조건 불가
		{
			cout << "0" << endl;
		}
		else
		{
			MAX_SIZE = WHITE / 3; // L자를 사용해야할 최대개수
			int iter_h = 0, iter_w = 0;
			for (int i = 0; i < MAX_SIZE; i++)
			{
				if (BOARD[iter_h][iter_w] == '.')
				{

				}
			

			}
		}
	}

	return 0;
}

int brother()
{


	float a = 0;

	return a;
}

void sister()
{

}
