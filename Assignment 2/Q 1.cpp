#include <iostream>
#include <string>
using namespace std;

class Employee{
	private:
    public:
    static int count;
    
   Employee(int =0){
       
   }
   
    ~Employee(){
       
   }
   
   static void increment(){
       count++;
       
   } 
   static void dis(){
       cout<<"the total no of Employees in company "<<count<<endl;
   }
    
};
int Employee::count=0;

int main() {
  Employee e1,  e2, e3;
  e1.increment();
  e2.increment();
  e3.increment();
  Employee::dis();
    return 0;
}

