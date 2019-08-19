#include <iostream>
#include <set>
int main()
{
	std::set<short> arr;
	for (int i = 0; i < 10; ++i)
	{
		short t;
		std::cin >> t;
		t = t % 42;
		arr.insert(t);
	}
	std::cout << arr.size();
	return 0;
}