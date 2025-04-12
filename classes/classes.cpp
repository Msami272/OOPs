#include <iostream>
#include <string>
using namespace std;

class Teacher{
	private:
	double balance;	
		string pin;
	public:
	string name;

	//constructor
	Teacher(double b,string n,string p){
		balance=b;
		name=n;
		pin=p;
	}
	//setter
	void setbal( double  newbal){
		balance=newbal;
	}
   //setter
	void setpin(string newpin){
		if(newpin.length() >= 4 ){
			pin=newpin;
		}
		else{
			cout<<"\ninvalid pin! "<<" pin should be atleast 4 digit long. "<<endl;
		}
	}
	//getter
	double  getbal(string checkpin){
	if(checkpin == pin){
	
		return balance;
	}
	else {
		return -1;
	}
}
	
	
};



int main(){
	Teacher t1(30000,"sami","307");
	string checkpin;

//	cout<<t1.getbal(30000);
	cout<<" enter 4 digit pin : "<<endl;

getline(cin,checkpin);
//if(checkpin==checkpin){

	double balance=t1.getbal(checkpin);
	if(balance != -1){
		cout<<balance;
	}
//}
else{
	cout<<"invalid pin try again! "<<endl;
}
	return 0;
}
