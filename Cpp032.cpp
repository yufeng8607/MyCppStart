#include<iostream>
using namespace std;

int count()
{
	static int cnt = 0;
	return ++cnt;
}

int main()
{
	int n = 0;
	for (int i = 0; i < 5; i++)
	{
		count();
	}
	cout << count();

	return 0;
}