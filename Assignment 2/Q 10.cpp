#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    string getName() const { return name; }
    int getAge() const { return age; }
};

class Student : public Person {
private:
    double grade;

public:
    Student(string n, int a, double g) : Person(n, a), grade(g) {}
    double getGrade() const { return grade; }
};

int main() {
    Student student("Sami", 21, 3.5);
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Grade: " << student.getGrade() << endl;
    return 0;
}
