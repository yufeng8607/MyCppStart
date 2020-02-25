#pragma once
#include<iostream>
#include "helper.h"

using namespace std;

struct Book book_instance;

int main()
{
	Book* book = &book_instance;
	while (true)
	{
		ui();
		cout << "Choose:" << endl;
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 0:
			return 0;
		case 1:
			insert(book);
			break;
		case 2:
			del(book);
			break;
		case 3:
			update(book);
			break;
		case 4:
			search(book);
			break;
		case 5:
			show(book);
			break;
		case 6:
			clear(book);
			break;
		default:
			break;
		}
	}

	return 0;
}