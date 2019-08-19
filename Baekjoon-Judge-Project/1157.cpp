#include <iostream>

int main()
{
	char input[1000000] = { NULL };
	int alphabet[26] = {0};
	int i = 0;
	int max = -1;
	bool isTop = true;
	std::cin >> input;
	int check = 0;
	while(true)
	{
		if (input[i] == NULL)
			break;
		
		switch(input[i])
		{
			
		case 65:
		case 97:
			alphabet[0]++;
			break;

		case 66:
		case 98:
			alphabet[1]++;
			break;

		case 67:
		case 99:
			alphabet[2]++;
			break;

		case 68:
		case 100:
			alphabet[3]++;
			break;

		case 69:
		case 101:
			alphabet[4]++;
			break;

		case 70:
		case 102:
			alphabet[5]++;
			break;
			
		case 71:
		case 103:
			alphabet[6]++;
			break;

		case 72:
		case 104:
			alphabet[7]++;
			break;

		case 73:
		case 105:
			alphabet[8]++;
			break;

		case 74:
		case 106:
			alphabet[9]++;
			break;

		case 75:
		case 107:
			alphabet[10]++;
			break;

		case 76:
		case 108:
			alphabet[11]++;
			break;

		case 77:
		case 109:
			alphabet[12]++;
			break;

		case 78:
		case 110:
			alphabet[13]++;
			break;

		case 79:
		case 111:
			alphabet[14]++;
			break;
			
		case 80:
		case 112:
			alphabet[15]++;
			break;

		case 81:
		case 113:
			alphabet[16]++;
			break;
			
		case 82:
		case 114:
			alphabet[17]++;
			break;

		case 83:
		case 115:
			alphabet[18]++;
			break;

		case 84:
		case 116:
			alphabet[19]++;
			break;

		case 85:
		case 117:
			alphabet[20]++;
			break;

		case 86:
		case 118:
			alphabet[21]++;
			break;

		case 87:
		case 119:
			alphabet[22]++;
			break;

		case 88:
		case 120:
			alphabet[23]++;
			break;

		case 89:
		case 121:
			alphabet[24]++;
			break;

		case 90:
		case 122:
			alphabet[25]++;
			break;
		}
		i++;
	}
	
	for(int i =0 ; i<26; ++i)
	{
		if(alphabet[i] >= max)
		{
			max = alphabet[i];
			check = i;
		}
	}
	int count = 0;
	for(int i = 0; i<26; ++i)
	{
		
		if (alphabet[i] == max)
			count++;

	}
	if (count >= 2)
		std::cout << '?';

	else
	{
		switch(check)
		{
		case 0:
			std::cout << 'A';
			break;

		case 1:
			std::cout << 'B';
			break;

		case 2:
			std::cout << 'C';
			break;

		case 3:
			std::cout << 'D';
			break;

		case 4:
			std::cout << 'E';
			break;

		case 5:
			std::cout << 'F';
			break;

		case 6:
			std::cout << 'G';
			break;

		case 7:
			std::cout << 'H';
			break;

		case 8:
			std::cout << 'I';
			break;

		case 9:
			std::cout << 'J';
			break;

		case 10:
			std::cout << 'K';
			break;

		case 11:
			std::cout << 'L';
			break;

		case 12:
			std::cout << 'M';
			break;

		case 13:
			std::cout << 'N';
			break;

		case 14:
			std::cout << 'O';
			break;

		case 15:
			std::cout << 'P';
			break;

		case 16:
			std::cout << 'Q';
			break;

		case 17:
			std::cout << 'R';
			break;

		case 18:
			std::cout << 'S';
			break;

		case 19:
			std::cout << 'T';
			break;

		case 20:
			std::cout << 'U';
			break;

		case 21:
			std::cout << 'V';
			break;

		case 22:
			std::cout << 'W';
			break;

		case 23:
			std::cout << 'X';
			break;

		case 24:
			std::cout << 'Y';
			break;

		case 25:
			std::cout << 'Z';
			break;
		}
	}
	
	
	return 0;
}