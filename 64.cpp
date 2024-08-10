#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    // Constructor
    Book(string bookTitle, string bookAuthor, int publicationYear)
        : title(bookTitle), author(bookAuthor), year(publicationYear) {}

    // Overload the << operator
    friend ostream& operator<<(ostream& os, const Book& book) {
        os << "Title: " << book.title << ", Author: " << book.author << ", Year: " << book.year;
        return os;
    }
};

int main() {
    Book book("The Catcher in the Rye", "J.D. Salinger", 1951);

    cout << book << endl;

    return 0;
}
