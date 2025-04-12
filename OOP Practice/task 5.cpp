#include <iostream>
using namespace std;

struct Book{
    string title;
    string author;
float price;
};
void input(Book* b,int n);
void display(Book* b,int n);
void sort(Book* b,int n);

int main() {
    int n;
    cout<<"enter the no of books : "<<endl;
    cin>>n;
    cin.ignore();
Book* b=new Book[n];

//function calls
input(b,n);
display(b,n);
sort(b,n);

delete[] b;
    return 0;
}
//function to input
void input(Book* b, int n){
    for(int i=0; i<n; i++){
    cout<<"enter "<<i+1<<" book's details : "<<endl;
    cout<<"enter book title : "<<endl;
    getline(cin,b[i].title);
    
    cout<<"enter author's name : "<<endl;
    getline(cin,b[i].author);
    
     cout<<"enter book's price : "<<endl;
    cin>>b[i].price;
    cin.ignore();
    
}
}
//function to display
void display(Book* b, int n){
 for(int i=0; i<n; i++){
     cout<<"Book "<<i+1<<" details : "<<endl;
     cout<<"\nBook title: "<<b[i].title<<endl;
     cout<<"Book's author : "<<b[i].author<<endl;
     cout<<"Book's price : "<<b[i].price<<endl;
     cout<<endl;
 }   
    
}
//fucntion to sort
void sort(Book* b, int n){
    float maxprice=b[0].price;
    for(int i=0; i<n; i++){
        if(b[i].price >maxprice){
            maxprice=b[i].price;
        }
    }
    cout<<"the most expensive book : "<<endl;
    cout<<endl;
    for(int i=0; i<n; i++){
        if(b[i].price ==maxprice){
            cout<<"book title : "<<b[i].title<<endl;
            cout<<"book's author : "<<b[i].author<<endl;
        }
    }
    cout<<"\n books by sorting : "<<endl;
    for(int i=0; i<n; i++){
        if(b[i].price <=maxprice){
              cout<<"book title : "<<b[i].title<<endl;
            cout<<"book's author : "<<b[i].author<<endl;
            cout<<"books price : "<<b[i].price<<endl;
            cout<<endl;
        }
    }
    
}


