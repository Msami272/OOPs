#include <iostream>
#include <string>
using namespace std;

class Teacher{
	private:
		double balance;
		
		
		public:
	string name;
	string dept;
	int age;
	//non-parameterized constructor
	Teacher(){
		dept="Computer Science ";
	}
	
	
	//parameterized constructor
	Teacher(string name,int age, double balance){
		cout<<"i'm constructor "<<endl;
		this->name=name;
		this->age=age;
		this->balance=balance;
		dept="Computer Science";
	}
	void setbal(double newbal){
		balance=newbal;
	}
	
	double getbal(){
		return balance;
	}
	void dis(){
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<balance<<endl;
		cout<<dept<<endl;
	}
	
};





int main(){
	Teacher t1("samar",31,300000);
	Teacher t2("sami",21,900000);
	

t1.dis();
t2.dis();


	
	return 0;
}
