#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::stack<char> decoder;
	std::string password;

	while (true)
	{
		std::getline(std::cin, password);

		if (password == "END")
			break;
		
		for (char i : password)
		{
			decoder.push(i);
		}

		for (char i : password)
		{
			std::cout << decoder.top();
			decoder.pop();
		}
		std::cout << '\n';
	}


	return 0;
}