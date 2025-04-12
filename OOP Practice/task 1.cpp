#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int widgth;
}; 
int area(Rectangle r);

int main() {
    Rectangle r;
  cout<<"enter the length : "<<endl;
  cin>>r.length;
  cout<<" enter the widgth : "<<endl;
  cin>>r.widgth;
  
 //function call
  int Area= area(r);
  cout<<"the area of rectangle : "<<Area<<endl;
  
    return 0;
}
//function to calculate and return area 
int area(Rectangle r){
    int Area=r.length*r.widgth;
    return Area;
} 

