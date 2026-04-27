#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title, author, ISBN;
};
class Library {
private:
    Book *books;
    int capacity;
    int count = 0;
public:
    Library(int size) {
        capacity = size;
        count = 0;
        books = new Book[capacity];
    }
    ~Library() {
        delete[] books;
    }
    bool addNewBook(const string &title, const string &author, const string &ISBN) {
        if (count >= 10) return false;

        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;
        return true;
    }
    bool removeBooks(const string &ISBN) {
        for (int i = 0; i < count; i++) {
            if (books[i].ISBN == ISBN) {
                for (int j = i; j < count - 1; j++) {
                    books[j] = books[j + 1];
                }
                count--;
                return true;
            }
        }
        return false;
    }
        void displayDetails() {
        if (count == 0) {
            cout << "No books available\n";
            return;
        }

        for (int i = 0; i < count; i++) {
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "ISBN: " << books[i].ISBN << endl;
            cout << "-------------------\n";
        }
    }
};

int main() {
    Library lib(10);

    lib.addNewBook("C++ Basics", "Author1", "101");
    lib.addNewBook("OOP Concepts", "Author2", "102");
    lib.addNewBook("Data Structures", "Author3", "103");
    lib.addNewBook("Algorithms", "Author4", "104");
    lib.addNewBook("DBMS", "Author5", "105");

    cout << "\nBefore Deletion:\n";
    lib.displayDetails();
    
    lib.removeBooks("103");

    cout << "\nAfter Deletion:\n";
    lib.displayDetails();

    return 0;
}