#include <iostream>

using namespace std;


class Shape
{
public:
	Shape(const string& type) : _type(type) {}
	virtual ~Shape() {}

	virtual const string& type() const { return _type; }
	virtual bool intersect(const Shape* other) const
	{
		cout << "is " << type() << " intersecet " << other->type() << endl;
		return 0;
	}

protected:
	string _type;
};

class Circle : public Shape
{
public:
	Circle() : Shape("circle") {}

	bool intersect(const Shape* other) const
	{
		Shape::intersect(other);
		return false;
	}
};

class Square : public Shape
{
public:
	Square() : Shape("square") {}

	bool intersect(const Shape* other) const
	{
		Shape::intersect(other);
		return false;
	}
};

class Triangle : public Shape
{
public:
	Triangle() : Shape("triangle") {}

	bool intersect(const Shape* other) const
	{
		Shape::intersect(other);
		return false;
	}
};

int main()
{
	Shape* circle = new Circle;
	Shape* square = new Square;
	Shape* triangle = new Triangle;

	circle->intersect(square);
	triangle->intersect(circle);

	delete circle;
	delete square;
	delete triangle;

	return 0;
}