//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[] = { 1, 2, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int tmp = 0;
//	for (int i = 0; i < len/2; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[len - i -1];
//		arr[len - i - 1] = tmp;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}