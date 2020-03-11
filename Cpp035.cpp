#include<iostream>
#include<vector>
using namespace std;

bool compare(const vector<int> &ivecA, const vector<int> &ivecB);
bool setEndValue(int x, vector<int>& ivec);

int main()
{
	vector<int> vecA = { 3,4,5,6 };
	vector<int> vecB = { 4,5,6,7 };
	bool flag = compare(vecA, vecB);
	if (flag == false)
	{
		cout << "Not same." << endl;
	}
	else
	{
		cout << "Same." << endl;
	}
	setEndValue(100, vecA);
	for (auto p = vecA.begin(); p != vecA.end(); p++)
	{
		cout << *p << "\t";
	}
	cout << endl;
	for (auto p = vecB.begin(); p != vecB.end(); p++)
	{
		cout << *p << "\t";
	}
	cout << endl;

	return 0;
}

bool compare(const vector<int>& ivecA, const vector<int>& ivecB)
{
	if (ivecA.size() != ivecB.size())
	{
		return false;
	}
	for (auto pA = ivecA.cbegin(), pB = ivecB.cbegin(); pA != ivecA.cend(); pA++, pB++)
	{
		if (*pA != *pB)
		{
			return false;
		}
	}
	return true;
}

bool setEndValue(int x, vector<int>& ivec)
{
	if (ivec.empty() == true)
	{
		return false;
	}
	else
	{
		auto p = (ivec.end() - 1);
		*p = x;
		return true;
	}
}
