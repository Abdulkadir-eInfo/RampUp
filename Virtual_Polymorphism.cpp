//Virtual Function, Runtime Polymorphism 
#include <iostream>
using namespace std;

//Base class
class Shape {
public:
	// Usage of virtual constructor
	virtual void calculate()
	{
		cout << "Area of your Shape ";
	}
	// usage of virtual Destuctor to avoid memory leak
	~Shape()
	{
		cout << "Shape Destuctor Call\n";
	}
};

// Declaration of Derived class
class Rectangle : public Shape {
public:
	int width, height, area;
	
	Rectangle()
	{
		cout << "Rectangle Constructor Call\n";
	}
	
	void calculate()
	{
		cout << "Enter Width of Rectangle: ";
		cin >> width;

		cout << "Enter Height of Rectangle: ";
		cin >> height;

		area = height * width;
		cout << "Area of Rectangle: " << area << "\n";
	}

	~Rectangle()
	{
		cout << "Rectangle Destuctor Call\n";
	}
};

class Square : public Shape {
public:
	int side, area;
	
	Square()
	{
		cout << "Square Constructor Call\n";
	}
	
	void calculate()
	{
		cout << "Enter one side your of Square: ";
		cin >> side;

		area = side * side;
		cout << "Area of Square: " << area << "\n";
	}

	~Square()
	{
		cout << "Square Destuctor Call\n";
	}
};

int main()
{

	// base class pointer
	Shape* S;
	Rectangle r;
	cout << "Base Class Pointer referring to object of Rectangle class\n";
	S = &r;
	S->calculate();
	
	cout << "\n\n";
	Square sq;
	cout << "Base Class Pointer referring to object of Square class\n";
	S = &sq;
	S->calculate();

	return 0;
}

