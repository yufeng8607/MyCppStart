#include<iostream>
using namespace std;

const double PI = 3.1415926;

class Circle
{
public:
	double r = 2.2;
	double calculateRound()
	{
		return 2 * PI * r;
	}
};

int main()
{
	Circle circle;
	cout << circle.calculateRound() << endl;
}