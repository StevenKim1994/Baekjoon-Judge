#include <array>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
int x, y;
array<char, 1000> matrix[1000];
bool search(int _x, int _y, string _input)
{
	if (_x >= x || _y >= y) // 입력된 좌표가 범위를 벗어나면 무조건 false (이는 재귀호출을 위함임)
	{
		return false;
	}

	if (matrix[_x][_y] != _input[0]) // 첫 문자가 아니면 무조건 아니니 false
	{
		return false;
	}

	if (_input.length() == 1) // 위에서 첫문자가 아닌지 확인했고 입력 문자의 길이가 1이면 하나만 맞으면 무조건 true임
	{
		return true;
	}
	
	// 재귀 함수 호출부분

	
}

int main()
{
	string input;


	vector<char> answer;

	cin >> x;
	cin >> y;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cin >> input;

	






	return 0;
}