#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
    public:
    string author_name;
    string book_title;
    
//    Book(){
//        
//    }
    
    Book(string name , string title): author_name(name) , book_title(title) {
       
    }
    void dis(Book *ptr){
        cout<<"Book Title : "<< book_title<<endl;
        cout<<"Author Name : "<<author_name<<endl;
    }
};

int main(){
    Book* b1=new Book("The Twilight saga","Stephenie meyer");
    Book* b2=new Book("The Da Vinci Code","Dan Brown");
    Book *ptr=b1;
    Book* ptr2=b2;
    //cout<<ptr->book_title;
b1->dis(ptr);
  b2->dis(ptr2);  
    delete b1;
    delete b2;
    b1=nullptr;
    return 0;
}
