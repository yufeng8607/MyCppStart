#include<iostream>
#include<fstream>

int main()
{
	std::ofstream ofs;
	ofs.open("tmp.txt", std::ios::out);
	ofs << "Hello World!" << std::endl;
	ofs << "..." << std::endl;
	ofs.close();
	return 0;
}