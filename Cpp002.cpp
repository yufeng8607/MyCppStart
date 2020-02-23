#include<iostream>
using namespace std;

int main()
{
	float numberA = 0.f;
	float numberB = 0.f;
	float numberC = 0.f;

	cout << "Input 3 numbers:" << endl;
	cin >> numberA >> numberB >> numberC;
	float max = 0.f;
	char max_name =' ';
	if (numberA > numberB)
	{
		max = numberA;
		max_name = 'A';
	}
	else
	{
		max = numberB;
		max_name = 'B';
	}
	if (max < numberC)
	{
		max = numberC;
		max_name = 'C';
	}

	cout << "Number " << max_name << " = " << max << " is Max." << endl;

	return 0;
}
