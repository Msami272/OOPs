#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int pages;
    float price;
};

int main() {
    Book myBook;

    cout << "Enter the title of the book: ";
    getline(cin, myBook.title);

    cout << "Enter the author's name: ";
    getline(cin, myBook.author);

    cout << "Enter the number of pages: ";
    cin >> myBook.pages;

    cout << "Enter the price of the book: ";
    cin >> myBook.price;

    cout << "\nBook Details:\n";
    cout << "Title: " << myBook.title << endl;
    cout << "Author: " << myBook.author << endl;
    cout << "Pages: " << myBook.pages << endl;
    cout << "Price: $" << myBook.price << endl;

    return 0;
}

