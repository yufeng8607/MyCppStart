#include<iostream>
using namespace std;

class Circle
{
private:
	double x;
	double y;
	double len;

public:
	void setX(double input_x)
	{
		x = input_x;
	}
	void setY(double input_y)
	{
		y = input_y;
	}
	void setLen(double input_len)
	{
		len = input_len;
	}
	double getX()
	{
		return x;
	}
	double getY()
	{
		return y;
	}
	double getLen()
	{
		return len;
	}
	void isIntersect(Circle c)
	{
		if ((c.getX() - x) * (c.getX() - x) + (c.getY() - y) * (c.getY() - y) > (len + c.getLen())* (len + c.getLen()))
		{
			cout<<"Not intersect."<<endl;
		}
		else if ((c.x - x) * (c.x - x) + (c.y - y) * (c.y - y) <= (len + c.len)* (len + c.len))
		{
			cout << "Intersect." << endl;
		}
	}
};

int main()
{
	Circle c1, c2;
	c1.setX(2.5);
	c1.setY(4);
	c1.setLen(2);
	c2.setX(1.5);
	c2.setY(3);
	c2.setLen(6);
	c1.isIntersect(c2);

	return 0;
}

