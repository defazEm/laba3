#include <iostream>

using namespace std;

class Shape
{
public:
	Shape(const string& type) : _type(type) {}
	virtual ~Shape() {}

	virtual const string& type() const { return _type; }

protected:
	string _type;
};

class Circle : public Shape
{
public:
	Circle() : Shape("circle") {}
};

class Square : public Shape
{
public:
	Square() : Shape("square") {}
};

class Triangle : public Shape
{
public:
	Triangle() : Shape("triangle") {}
};

void intersect(Shape* shape1, Shape* shape2)
{
	cout << "is " << shape1->type() << " intersecet " << shape2->type() << endl;
};

int main()
{
	Shape* circle = new Circle;
	Shape* square = new Square;
	Shape* triangle = new Triangle;

	intersect(circle, square);
	intersect(triangle, circle);

	delete circle;
	delete square;
	delete triangle;

	return 0;
}