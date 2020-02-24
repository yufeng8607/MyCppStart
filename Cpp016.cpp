#include<iostream>
using namespace std;

class Stu
{
public:
	string name;
	string number;
	string getName()
	{
		return name;
	}
	string getNumber()
	{
		return number;
	}
	void setName(string s)
	{
		name = s;
	}
	void setNumber(string s)
	{
		number = s;
	}
};

int main()
{
	Stu student;
	student.setName("Zhang");
	student.setNumber("7788");
	cout <<"Student's name: \t"<<student.getName() << endl;
	cout << "Student's number: \t " << student.getNumber() << endl;
}