#include<iostream>
#include<initializer_list>

using namespace std;

int sum(initializer_list<int> init);

int main()
{
	cout << sum({ 1,2,3,4,5,6 }) << endl;

	return 0;
}

int sum(initializer_list<int> init)
{
	int result = 0;
	for (auto i : init)
	{
		result += i;
	}
	return result;
}