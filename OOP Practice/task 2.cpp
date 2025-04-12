#include <iostream>
using namespace std;

struct Book{
    string title;
    string author;
    float price;
};

int main(){
	//initialised array of structures 
   Book structure[5]={{"Animal Farm","George Orwell",600},{"A tale of two cities","Charles Dickens",700},{"Alice in Wonderland","Lewis Carrol",900},{"David Copperfield","Charles Dickens",400},{"Treasure Island"," Robert Louis Stevenson",550} }; 
    
    cout<<" Books with prices more than $500 : "<<endl;
    for(int i=0; i<5; i++){
        if(structure[i].price > 500){
            cout<<"\n"<<" Name : "<<structure[i].title<<endl;
            cout<<" Author : "<<structure[i].author<<endl;
        }
    }
    
    return 0; 
    
}
