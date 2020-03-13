#include<iostream>
using namespace std;

class Phone
{
public:
	string phone_name;
	string phone_number;
	Phone(const string name, const string number) :phone_name(name), phone_number(number)
	{
		cout << "Phone构造函数." << endl;
	}
};

class Person
{
public:
	string person_name;
	Phone phone;
	Person(const string name, const string pname, const string pnumber) :person_name(name),phone(pname,pnumber)
	{
		cout << "Person构造函数." << endl;
	}
};

void test()
{
	Person p("Wang", "iPhone", "12580");
}

int main()
{
	test();
	return 0;
}