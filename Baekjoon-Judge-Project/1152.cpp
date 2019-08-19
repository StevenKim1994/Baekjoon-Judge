#include <iostream>
#include <cstring>
int main()
{
	int count = 0;
	char input[1000100]; // string 클래스로 받으니까 a b c공백 이 경우 c 뒤에 있는 공백이 입력이 안됨.
	std::cin.getline(input, 1000100, '\n');

	for (int i = 0; i < strlen(input); ++i)
	{
		if ((input[i] == '\n') || (input[i] == ' '))
			count++;

		else
			continue;

	}



	if (strlen(input) == 1 && (input[0] == '\n' || input[0] == ' '))
		count = 0;

	else if (strlen(input) == 1)
		count = 1;
	
	else 
	{
		count++;
		if (input[strlen(input) - 1] == ' ')
			count--;

		if (input[0] == ' ')
			count--;
	}

	std::cout << count;

	return 0;
}