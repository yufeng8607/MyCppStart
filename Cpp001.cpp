#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "Please input your score:" << endl;
	cin >> score;
	if (score > 600)
	{
		cout << "First." << endl;
	}
	else if(score > 500)
	{
		cout << "Second" << endl;
	}
	else if (score > 400)
	{
		cout << "Third" << endl;
	}
	else 
	{
		cout << "No." << endl;
	}

	return 0;
}
