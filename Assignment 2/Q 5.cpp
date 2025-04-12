#include <iostream>
using namespace std;

class Rectangle{
     private:
     public:
     int length;
     int breadth;
     
     //default constructor
     Rectangle(){
         length=0;
         breadth=0;
     }
     //parameterized constructor
     Rectangle(int length, int breadth){
         this->length=length;
         this->breadth=breadth;
     }
     //copy constructor
    Rectangle(const Rectangle & obj){
        this->length=obj.length;
        this->breadth=obj.breadth;
    }
    void dis(){
        cout<<"Length "<<length<<endl;
        cout<<"Breadth "<<breadth<<endl;
    }
    
};

int main(){
    Rectangle r1(10,10);
    Rectangle r2(r1);
    Rectangle r3;

    r3=r2;
//    cout<<"REC 1 \n"<<"length "<<r1.length<<" breadth "<<r1.breadth<<endl;
//    cout<<"REC 2 \n"<<"length "<<r2.length<<" breadth "<<r2.breadth<<endl;
//    cout<<"REC 3 \n"<<"length "<<r3.length<<" breadth "<<r3.breadth<<endl;
    
    r1.dis();
    r2.dis();
    r3.dis();
    return 0;
}


