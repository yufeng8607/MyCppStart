#include<iostream>
#include<string>

int main()
{
	std::string s0, s1, s2;
	std::cin >> s0 >> s1 >> s2;
	s0 += (' '+s1 +' '+ s2);
	std::cout << s0 << std::endl;

}