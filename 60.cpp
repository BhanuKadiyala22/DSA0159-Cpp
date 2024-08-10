#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    double price;

public:
    // Constructor
    Book(string bookTitle, string bookAuthor, int publicationYear, double bookPrice) 
        : title(bookTitle), author(bookAuthor), year(publicationYear), price(bookPrice) {
        cout << "Book created: " << title << " by " << author << "." << endl;
    }

    // Destructor
    ~Book() {
        cout << "Book destroyed: " << title << " by " << author << "." << endl;
    }

    void displayBookDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book book("The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99);

    book.displayBookDetails();

    return 0;
}
