#include <iostream>

int main()
{
	short hour, minute, temp;
	std::cin >> hour >> minute;

	minute -= 45;
	if (minute < 0)
	{
		hour--;
		if(hour < 0)
		{
			hour = 23;
		}
		temp = minute;
		minute = 60;
		minute += temp;
	}
	

	std::cout << hour << " " << minute;
	
	return 0;
}