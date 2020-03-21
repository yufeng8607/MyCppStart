#include<iostream>

class Person
{
	friend std::ostream& operator<<(std::ostream& out, const Person& p);
public:
	Person() = default;
	Person(std::string m_name, int m_age)
	{
		name = m_name;
		age = m_age;
	}

private:
	std::string name;
	int age;

};

std::ostream& operator<<(std::ostream& out, const Person& p)
{
	out << "Name: " << p.name << std::endl;
	out << "Age: " << p.age << std::endl;
	return out;
}

int main()
{
	Person p("Yu", 25);
	std::cout << p << std::endl;

	return 0;
}