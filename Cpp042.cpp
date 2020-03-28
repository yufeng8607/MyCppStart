//#include<iostream>
//
//class Number
//{
//	friend std::ostream& operator<<(std::ostream& os, const Number& number);
//public:
//	Number() = default;
//	Number(int m_value)
//	{
//		value = m_value;
//	}
//	Number& operator++();
//	Number operator++(int);
//	
//private:
//	int value;
//};
//
//std::ostream& operator<<(std::ostream& os, const Number& number)
//{
//	os << number.value << std::endl;
//	return os;
//}
//
//Number& Number::operator++()
//{
//	++value;
//	return *this;
//}
//
//Number Number::operator++(int)
//{
//	Number tmp = *this;
//	++value;
//	return tmp;
//}
//
//int main()
//{
//	Number j(20);
//	std::cout << j++ << std::endl;
//	std::cout << ++j << std::endl;
//	std::cout << j << std::endl;
//	return 0;
//}
