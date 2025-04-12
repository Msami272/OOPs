#include <iostream>
using namespace std;

struct Employee{
    string name;
    string id;
    double salary;
};


int main() {
   Employee e1;
   cout<<"enter the name of Employee : "<<endl;
   cin>>e1.name;
   cout<<"enter the id of Employee : "<<endl;
   cin>>e1.id;
   cout<<" enter the salary of Employee : "<<endl;
   cin>>e1.salary;
   
   Employee* ptr;
   ptr=&e1;
   
   cout<<" the details of Employee : "<<endl;
   cout<<"\nName: "<<ptr->name<<endl;
   cout<<"id : "<<ptr->id<<endl;
   cout<<"salary : "<<ptr->salary<<endl;
   
   
    return 0;
}
