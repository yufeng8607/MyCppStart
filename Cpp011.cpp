#include<iostream>
using namespace std;

void BubbleSort(int* arr, int len);

int main()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	BubbleSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}

void BubbleSort(int* arr, int len)
{
	int* p = arr;
	for (int i = len - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (p[j] > p[j+1])
			{
				int tmp = 0;
				tmp = p[j];
				p[j] = p[j+1];
				p[j+1] = tmp;
			}
		}
	}

}