#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int x = 0;
	while (cin >> x)
	{
		if (x == 0)
		{
			break;
		}
		ivec.push_back(x);
	}
	for (auto p = ivec.cbegin(); p != ivec.cend(); ++p)
	{
		cout << *p;
	}
	cout << endl;
	auto p = ivec.begin();
	
	if (ivec.size() != 0)
	{
		while (p != ivec.end())
		{
			if (*p % 2 == 0)
			{
				p = ivec.erase(p);
			}
			else
			{
				p++;
			}
		}
	}

	for (auto p = ivec.cbegin(); p != ivec.cend(); ++p)
	{
		cout << *p << " ";
	}


	return 0;
}