#include <bits/stdc++.h>

int main()
{
	/*2007.1.1 == MON..
	 1,3,5,8,10,12 -> ~ 31day
	 4,6,9,11 -> ~ 30day
	 2 -> ~ 28day 
	*/
	int x, y;
	int sum_day = 0;
	std::string days[7] = { "MON","TUE","WED", "THU", "FRI", "SAT", "SUN" };
	std::string today;
	std::cin >> x >> y;

	for(int i =1; i <x; ++i)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				sum_day += 31;
				break;

			case 4:
			case 6:
			case 9:
			case 11:
				sum_day += 30;
				break;
			
			case 2:
				sum_day += 28;
				break;
		}
	}
	
	
	if (x == 1)
	{
		//sum_day -= 31;
		sum_day += y-1;
	}

	else if (x != 1)
		sum_day += y-1;

	
	
	int count = 0;
	today = days[count];
	
	for(int i = 0; i<= sum_day; ++i)
	{
		
		
		if (count == 7)
		{
			count = 0;
			today = days[count];
		}

		else
		{
			today = days[count];
		}

		count++;

	}


	std::cout << today;
	
	return 0;
}