#include<iostream>

using namespace std;

const int MAX = 1000;

struct Person
{
	string name;
	string gender;
	int age;
	string phone;
	string address;
};

struct Book
{
	Person addressBook[MAX];
	int len;
};

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

void update(struct Book* book)
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

void insert(struct Book* book)
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

void del(struct Book* book)
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

void search(struct Book* book)
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

void show(struct Book* book)
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

void clear(struct Book* book)
{
	book->len = 0;
}

int main()
{
	Person persons[MAX];
	Book book_insance;
	Book* book = &book_insance;
	book->len = 0;
	int select = 0;
	while (true)
	{
		ui();
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