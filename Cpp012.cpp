#include<iostream>
using namespace std;

int main()
{
	struct Student
	{
		string name;
		int age;
		float score;
	};

	struct Teacher
	{
		string name;
		int age;
		Student stu;
	};

	Teacher t = { "Jone", 40, {"Jack", 15, 70.5} };

	cout << "Teacher name:" << t.name << "  Teacher age:" << t.age << endl;
	cout << "Student name:" << t.stu.name << "  Student age:" << t.stu.age << "  Student score:" << t.stu.score << endl;

	return 0;
}