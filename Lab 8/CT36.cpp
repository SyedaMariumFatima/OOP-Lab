#include <iostream>
#include <string>

using namespace std;

// Forward declaration
class Librarian;

class LibraryBook {
private:
    string title;
    bool isAvailable;

public:
    LibraryBook(string t) : title(t), isAvailable(true) {}

    // Task 2: Grant Librarian access to private members
    friend class Librarian;
};

class Librarian {
public:
    // Task 3 & 4: Logic to issue books with conditions
    void issueBook(LibraryBook &book) {
        if (book.isAvailable) {
            book.isAvailable = false;
            cout << "Successfully issued: " << book.title << endl;
        } else {
            cout << "Error: '" << book.title << "' is already issued." << endl;
        }
    }

    // Task 3: Logic to return books
    void returnBook(LibraryBook &book) {
        book.isAvailable = true;
        cout << "Successfully returned: " << book.title << endl;
    }
};

int main() {
    LibraryBook myBook("The Great Gatsby");
    Librarian admin;

    // Test Issue
    admin.issueBook(myBook); 
    
    // Test condition: Already issued
    admin.issueBook(myBook); 

    // Test Return
    admin.returnBook(myBook);

    return 0;
}
