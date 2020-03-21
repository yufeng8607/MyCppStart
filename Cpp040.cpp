#include<iostream>

class Number
{
public:
	int value = 0;
	Number() = default;
	Number(int m_value)
	{
		value = m_value;
	}
	Number& operator+(const Number& num)const;
	void display()const;
};

Number& Number::operator+(const Number& m_number)const
{
	Number* p_number = new Number(value + m_number.value);
	return *p_number;
}

void Number::display()const
{
	std::cout << value << std::endl;
}

int main()
{
	int x = 0;
	int y = 0;
	std::cin >> x >> y;
	Number x_ins(x);
	Number y_ins(y);
	(x_ins + y_ins).display();

	return 0;
}