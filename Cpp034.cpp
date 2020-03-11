#include<iostream>
using namespace std;

bool compare_len(const string& s1, const string& s2);

int main()
{
	string str1 = "Hello.";
	string str2 = "Hi.";
	cout << (compare_len(str1, str2)?"Shorter.":"Longer.") << endl;

	return 0;
}

bool compare_len(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}