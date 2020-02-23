/*

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	int guess = 0;
	bool flag = false;
	while (flag == false)
	{
		cout << "Input a number which is in 1~100" << endl;
		cin >> guess;
		if (guess == num)
		{
			cout << "Correct." << endl;
			flag = true;
		}
		else if (guess >= num)
		{
			cout << "Too big." << endl;
		}
		else
		{
			cout << "Too small." << endl;
		}

	}

	return 0;
}

*/