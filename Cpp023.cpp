#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cout << "Input string:" << endl;
	cin >> s;
	cout << "Len Before:  " << s.size() << endl;
	int offset = 0;
	for (decltype(s.size()) i = 0; i < s.size(); i++)
	{
		if (ispunct(s[i]))
		{
			offset++;
		}
		else
		{
			s[i - offset] = s[i];
		}
	}
	string sp = s.substr(0, s.size() - offset);
	cout << "The string after processed:  " << sp << endl;
	cout << "Len After:  " << sp.size() << endl;

	return 0;
}