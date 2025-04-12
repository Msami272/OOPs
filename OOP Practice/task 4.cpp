#include <iostream>
using namespace std;

struct Student{
string name;
string rollno;
int marks;
};


int main() {
    int n;
    cout<<"enter the number of students : "<<endl;
    cin>>n;
    cin.ignore();
   Student* s1=new Student[n];
   
   cout<<"enter the details of "<<n<<" students : "<<endl;
   for(int i=0; i<n; i++){
       cout<<"Student "<<i+1<<" : "<<endl;
       cout<<"enter name : "<<endl;
       getline(cin,s1[i].name);
 
       cout<<"enter roll no : "<<endl;
       getline(cin,s1[i].rollno);
       
       
       cout<<"enter marks : "<<endl;
       cin>> s1[i].marks;
         cin.ignore();
   }
    for(int i=0; i<n; i++){
        cout<<"\n Student "<<i+1<<" details : "<<endl;
       cout<<"\nname : "<<s1[i].name<<endl;
       
       cout<<"roll no : "<<s1[i].rollno<<endl;
      
       cout<<"marks : "<<s1[i].marks<<endl;
       
   }
   
   delete[] s1;
   
    return 0;
}
