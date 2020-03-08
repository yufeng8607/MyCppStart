#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec_part;
	vector<int> ivec_all;
	int x = 0;
	cout << "Input numbers you want to check:" << endl;
	while (cin >> x)
	{
		ivec_part.push_back(x);
	}
	cin.clear();
	cin.ignore();
	cout << "Input the whole array:" << endl;
	while (cin >> x)
	{
		ivec_all.push_back(x);
	}
	if (ivec_all.size() < ivec_part.size())
	{
		cout << "False." << endl;
	}
	else
	{
		for (auto p_part = ivec_part.begin(), p_all = ivec_all.begin(); p_part != ivec_part.end(); p_part++, p_all++)
		{
			if (*p_part != *p_all)
			{
				cout << "False." << endl;
				return 0;
			}

		}
		cout << "True." << endl;
	}
	return 0;
}