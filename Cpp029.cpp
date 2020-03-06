#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> ivec = { 1,2,3,4,5,6,7 };
	auto beg = ivec.cbegin();
	auto end = ivec.cend();
	auto mid = beg + (end - beg) / 2;
	int value;
	cout << "Input a number:" << endl;
	cin >> value;
	while (mid != end && *mid != value)
	{
		if (*mid < value)
		{
			beg = mid + 1;
		}
		else
		{
			end = mid;
		}
		mid = beg + (end - beg) / 2;
	}
	if (*mid == value)
	{
		cout << "Exist." << endl;
	}
	else
	{
		cout << "Not exist." << endl;
	}
	return 0;
}