#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
    public:
    const int salary=30000;
    string id;
    Employee* ptr;
    
    Employee(string id){
        this->id=id;
        cout<<"address "<<this<<endl;
        
    }
    
   void dis(){
       cout<<"id "<<id<<endl;
       cout<<"salary "<<salary<<endl;
   }
    
};


int main(){
    Employee e1("3073");
     e1.dis();
    Employee e2("1234");
  e2.dis();
    return 0;
}
