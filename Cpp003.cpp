#include<iostream>
using namespace std;

int main()
{
	 int score = 0;
	 cout << "Input your score."<<endl;
	 cin >> score;
	 switch (score)
	 {
	 case 5:
		 cout << "很好" << endl;
		 break;
	 case 4:
		 cout << "较好" << endl;
		 break;
	 case 3:
		 cout << "一般" << endl;
		 break;
	 case 2:
		 cout << "较差" << endl;
		 break;
	 case 1:
		 cout << "极差" << endl;
		 break;
	 default:
		 cout << "未做出评价" << endl;
		 break;
	 }

	 return 0;
}
