#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Library {
public:
    string libraryName;

    Library() {
        libraryName = "Central Library";
    }

    void displaySections() {
        cout << "Library Sections:\n";
        cout << "- Fiction\n";
        cout << "- Non-Fiction\n";
        cout << "- Science\n";
        cout << "- History\n";
        cout << "- Technology\n";
        cout << endl;
    }
};

class Book : public Library {
public:
    vector<string> bookTitles;

    Book() {
     
        bookTitles.push_back("To Kill a Mockingbird");
        bookTitles.push_back("Little Women");
        bookTitles.push_back("A Brief History of Time");
        bookTitles.push_back("1984");
        bookTitles.push_back("Sapiens: A Brief History of Humankind");
    }

    void displayBooks() {
        cout << libraryName << " - Book Collection:\n";
        for (const string& title : bookTitles) {
            cout << "- " << title << endl;
        }
        cout << endl;
    }

    void addBook(string newTitle) {
        bookTitles.push_back(newTitle);
        cout << "\"" << newTitle << "\" has been added to the library.\n";
    }
};

int main() {
    Book b1;

    b1.displaySections();
    b1.displayBooks();

   
    b1.addBook("The Great Gatsby");

    cout << "\nUpdated Book Collection:\n";
    b1.displayBooks();

    return 0;
}
