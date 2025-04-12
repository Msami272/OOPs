#include <iostream>
using namespace std;

class Shape {
private:
    double area;

protected:
    virtual double calculateArea() {
        return 0; 
    }

public:
    void displayArea() {
        area = calculateArea(); 
        cout << "Area: " << area << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

protected:
    double calculateArea() override {
        return 3.14159 * radius * radius;
    }

public:
    Circle(double r) : radius(r) {}
};

int main() {
    Circle circle(5.0);
    circle.displayArea();
    return 0;
}
