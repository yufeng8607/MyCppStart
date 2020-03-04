#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec;
	for (int i = 0; i != 100; i++)
	{
		ivec.push_back(i*i);
	}
	for (int i = 0; i != 100; i++)
	{
		cout << ivec[i] << endl;
	}
	return 0;
}