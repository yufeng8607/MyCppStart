#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int x = 0;
	vector<int> ivec;
	while (cin >> x)
	{
		ivec.push_back(x);
	}
	for (auto it = ivec.begin(); it != ivec.end(); it++)
	{
		*it = (*it) * 2;
	}
	for (auto value : ivec)
	{
		cout<<value<<" ";
	}
	cout << endl;


	return 0;
}