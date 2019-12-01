#include <iostream>
#include <string>
#include <stack>

int main()
{
	std::string A, B;
	std::stack<char> reverse;
	int A_integer, B_integer;
	std::cin >> A >> B;

	for(int i=0; i<A.length(); i++)
	{
		reverse.push(A[i]);
	}

	for(int i=0; i<A.length();i++)
	{
		A[i] = reverse.top();
		reverse.pop();
	}

	for(int i=0; i<B.length(); i++)
	{
		reverse.push(B[i]);
	}

	for(int i =0; i<B.length(); i++)
	{
		B[i] = reverse.top();
		reverse.pop();
	}

	A_integer = std::stoi(A);
	B_integer = std::stoi(B);

	if (A_integer > B_integer)
	{
		std::cout << A_integer << '\n';
	}
	else
	{
		std::cout << B_integer << '\n';
	}



	return 0;
}