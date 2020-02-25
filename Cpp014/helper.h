#pragma once
#include<iostream>
using namespace std;

const int MAX = 1000;

struct Person
{
	string name;
	string gender;
	int age = 0;
	string phone;
	string address;
};

struct Book
{
	Person addressBook[MAX];
	int len = 0;
};

void ui();
void update(Book* book);
void insert(Book* book);
void del(Book* book);
void search(Book* book);
void show(Book* book);
void clear(Book* book);
void show(Book* book);