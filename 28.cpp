#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter an integer to check if it is a neon number: ";
    cin >> num;

    int square = num * num;

    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }

    if (sum == num) {
        cout << num << " is a neon number." << endl;
    } else {
        cout << num << " is not a neon number." << endl;
    }

    return 0;
}
