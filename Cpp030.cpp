#include<iostream>

using namespace std;

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* beg = begin(arr);
	int* end = std::end(arr);
	for (int* p = beg; p != end; p++)
	{
		*p = 0;
	}
	for (int* p = beg; p != end; p++)
	{
		cout << *p << "\t";
	}
	return 0;
}