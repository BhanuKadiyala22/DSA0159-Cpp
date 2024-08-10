#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter an integer to calculate the sum of its digits: ";
    cin >> num;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of the digits is: " << sum << endl;

    return 0;
}
