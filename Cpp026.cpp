#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int x = 0;
	while (cin >> x)
	{
		ivec.push_back(x);
	}
	for (decltype(ivec.size()) i = 0; i != ivec.size() - 1; i += 2)
	{
		cout << ivec[i] + ivec[i + 1] << endl;
	}
	for (decltype(ivec.size()) i = 0; i != ivec.size()/2; i++)
	{
		cout << ivec[i] + ivec[ivec.size() - i - 1] << endl;
	}
	return 0;
}