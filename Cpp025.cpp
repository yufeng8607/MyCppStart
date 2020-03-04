#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string s;
	vector<string> ss;
	while (cin >> s)
	{
		if (s == "q")
		{
			break;
		}
		ss.push_back(s);
	}
	cout << "Before:" << endl;
	for (auto s : ss)
	{
		cout << s << "\t";
	}
	cout << endl;
	cout << "After:" << endl;
	for (auto &s : ss)
	{
		for (auto &c : s)
		{
			c = toupper(c);
		}
	}
	for (auto s : ss)
	{
		cout << s << "\t";
	}

	return 0;
}