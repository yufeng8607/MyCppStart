#include<iostream>
#include<string>

int main()
{
	std::string s;
	std::cout << "Input a string:" << std::endl;
	std::cin >> s;
	for (auto &c : s)
	{
		c = std::toupper(c);
	}
	std::cout << s << std::endl;

	return 0;
}