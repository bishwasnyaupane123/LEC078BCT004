#include <iostream>
using namespace std;
class Polygon {
protected:
    double length;
    double height;
public:
    Polygon(double l, double h) : length(l), height(h) {}

    virtual double Area() const = 0;
};
class Rectangle : public Polygon {
public:
    Rectangle(double l, double h) : Polygon(l, h) {}

    double Area() const override {
        return length * height;
    }
};
class Triangle : public Polygon {
public:
    Triangle(double l, double h) : Polygon(l, h) {}

    double Area()const override{
        return 0.5 * length * height;
    }
};
int main() {
    Rectangle rectangle(5.0,3.0);
    cout << "Rectangle Area: " << rectangle.Area() <<endl;
    Triangle triangle(4.0,6.0);
    cout << "Triangle Area: " << triangle.Area() <<endl;
    return 0;
}
