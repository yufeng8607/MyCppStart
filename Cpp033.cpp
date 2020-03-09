#include<iostream>
using namespace std;

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int x = 5;
	int y = 6;
	swap(x, y);
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	return 0;
}