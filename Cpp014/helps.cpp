#pragma once
#include<iostream>
#include "helper.h"
using namespace std;

void ui()
{
	cout << "***************" << endl;
	cout << "** 1. Insert **" << endl;
	cout << "** 2. Delete **" << endl;
	cout << "** 3. Update **" << endl;
	cout << "** 4. Search **" << endl;
	cout << "** 5.  Show  **" << endl;
	cout << "** 6.  Clear **" << endl;
	cout << "** 0.  Exit  **" << endl;
	cout << "***************" << endl;
}

void update(Book* book)
{
	string name = "";
	cout << "Input name:" << endl;
	cin >> name;
	bool flag = false;
	string gender = "";
	int age = 0;
	string phone = "";
	string address = "";
	cout << "Input gender:" << endl;
	cin >> gender;
	cout << "Input age:" << endl;
	cin >> age;
	cout << "Input phone:" << endl;
	cin >> phone;
	cout << "Input address:" << endl;
	cin >> address;
	for (int i = 0; i < book->len; i++)
	{
		if (name == book->addressBook[i].name)
		{
			flag = true;
			(book->addressBook)[i] = { name, gender, age, phone, address };
			break;
		}
	}
	if (flag == false)
	{
		cout << "Do not exist." << endl;
	}
}

void insert(Book* book)
{
	if (book->len >= 1000)
	{
		cout << "Can not insert." << endl;
	}
	else
	{
		string name = "";
		string gender = "";
		int age = 0;
		string phone = "";
		string address = "";
		cout << "Input name:" << endl;
		cin >> name;
		cout << "Input gender:" << endl;
		cin >> gender;
		cout << "Input age:" << endl;
		cin >> age;
		cout << "Input phone:" << endl;
		cin >> phone;
		cout << "Input address:" << endl;
		cin >> address;
		bool flag = false;
		for (int i = 0; i < book->len; i++)
		{
			if (name == book->addressBook[i].name)
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			(book->addressBook)[book->len] = { name, gender, age, phone, address };
			cout << "Insert successfully." << endl;
			book->len = book->len + 1;
		}
		else
		{
			cout << "The person exists.Turn to Update function." << endl;
			update(book);
		}
	}
}

void del(Book* book)
{
	if (book->len <= 0)
	{
		cout << "The list is empty." << endl;
	}
	else
	{
		string name = "";
		cin >> name;
		cout << "Input the person that you want to delete:" << endl;
		int index = 0;
		for (int i = 0; i < book->len; i++)
		{
			if (book->addressBook[i].name == name)
			{
				index = i;
				break;
			}
		}
		book->addressBook[index] = book->addressBook[book->len - 1];
		book->len = book->len - 1;
	}
}

void search(Book* book)
{
	string name = "";
	cin >> name;
	for (int i = 0; i < book->len; i++)
	{
		if (name == book->addressBook[i].name)
		{
			cout << "Name:\t" << book->addressBook[i].name << endl;
			cout << "Age:\t" << book->addressBook[i].age << endl;
			cout << "Gender:\t" << book->addressBook[i].gender << endl;
			cout << "Phone:\t" << book->addressBook[i].phone << endl;
			cout << "Address:\t" << book->addressBook[i].address << endl;
		}
	}
}

void show(Book* book)
{
	for (int i = 0; i < book->len; i++)
	{
		cout << "Name:\t" << book->addressBook[i].name << endl;
		cout << "Age:\t" << book->addressBook[i].age << endl;
		cout << "Gender:\t" << book->addressBook[i].gender << endl;
		cout << "Phone:\t" << book->addressBook[i].phone << endl;
		cout << "Address:\t" << book->addressBook[i].address << endl;
		cout << "-----------------------------------------------" << endl;
	}
}

void clear(Book* book)
{
	book->len = 0;
}