#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer to check if it is a buzz number: ";
    cin >> num;

    if (num % 7 == 0 || num % 10 == 7) {
        cout << num << " is a buzz number." << endl;
    } else {
        cout << num << " is not a buzz number." << endl;
    }

    return 0;
}
