#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> cnts(11, 0);
	vector<int> ivec = { 42,65,95,100,39,67,95,76,88,76,83,92,76,93 };
	for (auto i : ivec)
	{
		cnts[i / 10]++;
	}
	for (auto cnt : cnts)
	{
		cout << cnt;
	}
	cout << endl;
	return 0;
}