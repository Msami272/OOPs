#include <iostream>
#include <cstring>
using namespace std;

class Person{
    public:
    char* name;
    
    //constructor
    Person(const char* n)  {
        name=new char[strlen(n) + 1];
        strcpy(name, n);
    }
    //copy constructor
    Person(const Person &obj){
        name=new char[strlen(obj.name) + 1];
        strcpy(name,obj.name);
    }
    void dis(){
        cout<<"name "<<name<<endl;
    }
  
};


int main() {
   Person p1("Ali");
   Person p2(p1);
   Person p3=p2;
   p2="Ahmed";
   p3="Sami";
   p1.dis();
   p2.dis();
   p3.dis();
    return 0;
}
