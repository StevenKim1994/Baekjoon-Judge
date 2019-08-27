#include <bits/stdc++.h>

int main()
{
	std::string temp = "";
	std::string input_data;
	bool check = false;
	int result = 0;

	std::cin >> input_data;

	for(int i =0; i <=input_data.size(); ++i)
	{

		if(input_data[i] == '+' || input_data[i] == '-' || input_data[i] =='\0')
		{
			if(check == true)
			{
				result -= std::stoi(temp);
				temp = "";
				//check = false;
			}

			else
			{
				result += std::stoi(temp);
				temp = "";
				//check = false;
			}

			if(input_data[i] == '-')
			{
				check = true;
				continue;
			}

		
			
		}
		
			temp += input_data[i];
	
	}

	std::cout << result;
	
	return 0;
}

// 60+30-60+10+50-60 
// 90-(60+10+50)-(60)