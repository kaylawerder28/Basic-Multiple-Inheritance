#include <iostream>
using namespace std;

class BasicShape
{
protected:
	double area;
public:
	double getArea() { return area; }
	virtual void calcArea() = 0;
};

class Circle : public BasicShape
{
private:
	long int centerX;
	long int centerY;
	double radius;
public: 
	Circle():BasicShape(){}
	Circle(long int x, long int y, double r)
	{
		centerX = x;
		centerY = y;
		radius = r;
	}
	void setCenterX(long int x) { centerX = x; }
	void setCenterY(long int y) { centerY = y; }
	void setRadius(double r) { radius = r; }
	long int getCenterX() { return centerX; }
	long int getCenterY() { return centerY; }
	double getRadius() { return radius; }
	virtual void calcArea() { cout << "area of circle: " << 3.14159*radius*radius << endl; }
};
class Rectangle : public BasicShape
{
private: 
	long int width;
	long int length;
public:
	Rectangle():BasicShape(){}
	Rectangle(long int w, long int l)
	{
		width = w;
		length = l;
	}
	void setWidth(long int w) { width = w; }
	void setLength(long int l) { length = l; }
	long int getWidth() { return width; }
	long int getLength() { return length; }
	virtual void calcArea() { cout << "area of rectangle: " << length * width << endl; }
};
int main()
{
	BasicShape *b1 = new Circle(2, 4, 10);
	BasicShape *b2 = new Rectangle(3, 4);
	b1->calcArea();
	b2->calcArea();
	getchar();
}