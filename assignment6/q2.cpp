#include <iostream>
using namespace std;
class Book {
public:
    string title, author, ISBN;
    Book() {
        title = "NA";
        author = "NA";
        ISBN = "0";
    }
    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }
    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};
class Library {
private:
    Book *books;
    int size;

public:
    Library(int size) {
        this->size = size;
        books = new Book[size];
    }

    bool removeBooks(const string &ISBN) {
        for (int i = 0; i < size; i++) {
            if (books[i].ISBN == ISBN) {
                books[i] = Book();
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < size; i++) {
            cout << books[i].title << " "
                 << books[i].author << " "
                 << books[i].ISBN << endl;
        }
    }
};

int main() {
    Book b1[2] = {
        Book("A","AA","1"),
        Book("B","BB","2")
    };
    Library lib(3);

    lib.displayDetails();
}