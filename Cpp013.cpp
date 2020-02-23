#include<iostream>
using namespace std;

int main()
{
	struct Hero
	{
		string name;
		int age;
		string gender;
	};

	struct Hero heroArray[5] = {
		{"LiuBei", 23, "Male"},
		{"GuanYu", 22, "Male"},
		{"ZhangFei", 20, "Male"},
		{"ZhaoYun", 21, "Male"},
		{"DiaoChan", 19, "Female"}
	};

	int len = 5;

	for (int i = len-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero tmp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		cout << "Name:\t" << heroArray[i].name << "\tAge:\t" << heroArray[i].age << "\tGender:\t" << heroArray[i].gender << endl;
	}

	return 0;
}