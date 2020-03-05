#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string s;
	vector<string> svec;
	while (cin >> s)
	{
		if (s == "#")
		{
			break;
		}
		svec.push_back(s);
	}
	for (auto it = svec.begin(); it != svec.end(); it++)
	{
		for (char& c : *it)
		{
			c = toupper(c);
		}
	}
	for (auto it = svec.begin(); it != svec.end(); it++)
	{
		cout << *it;
	}
	cout << endl;

	return 0;
}