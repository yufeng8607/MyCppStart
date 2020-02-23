#include<iostream>
using namespace std;

int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };;
	int len = sizeof(arr) / sizeof(arr[0]);
	int tmp = 0;
	for (int i = len - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] <= arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
				cout << arr[i] << " ";
	}

	return 0;
}