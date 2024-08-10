#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    // Constructor
    Counter(int initialValue = 0) : value(initialValue) {}

    // Overload the ++ operator (prefix)
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Overload the ++ operator (postfix)
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    // Function to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Initial ";
    c.display();

    ++c;
    cout << "After prefix ++ ";
    c.display();

    c++;
    cout << "After postfix ++ ";
    c.display();

    return 0;
}
