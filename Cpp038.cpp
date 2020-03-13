#include<iostream>
using namespace std;

class Person
{
public:
	string name;
	int id;
	static int cnt;
	Person()
	{
		cnt++;
	}
};

int Person::cnt = 0;

int main()
{
	Person p1;
	Person p2;
	cout << p2.cnt << endl;
	cout << Person::cnt << endl;
	return 0;
}