#include <iostream>
#include <string>
using namespace std;

class employee{
    protected:
    double salary;
    public:
    string name;
    string id;
    
    employee(string name, string id, double salary){
        this->name=name;
        this->id=id;
        this->salary=salary;
    }
   virtual void dis() const{
    cout<<"Name "<<name<<endl;
    cout<<"ID "<<id<<endl;
    cout<<"Salary "<<salary<<endl;
}
    
};
class manager : public employee{
    public:
    string dept;
    manager(string name, string id, double salary, string dept) : employee (name,id,salary) {
        this->dept=dept;
       
    }
    void dis() const override{
        employee::dis();
         cout<<"Department "<<dept<<endl;
    }
    
    
};


int main() {
 manager m1("Ali","123",30000,"Computer Science");
employee e1("sami","345",30000);
cout<<"Manager Details : "<<endl;
m1.dis();
cout<<"\n Employee Details :  "<<endl;
 e1.dis();
 
    return 0;
}

