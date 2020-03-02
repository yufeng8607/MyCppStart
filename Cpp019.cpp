#include<iostream>
#include<string>

int main()
{
	std::string s0;
	std::string s1;
	
	std::cout << "Input String 0:" << std::endl;
	std::getline(std::cin, s0);
	std::cout << "Input String 1:" << std::endl;
	std::getline(std::cin, s1);
	if (s0.size() == s1.size())
	{
		std::cout << "Equal." << std::endl;
	}
	else if(s0.size()>=s1.size())
	{
		std::cout << "S0 is longer." << std::endl;
	}
	else
	{
		std::cout << "S1 is longer." << std::endl;
	}

	return 0;
}