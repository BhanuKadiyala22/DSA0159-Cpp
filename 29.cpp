#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number to check if it is abundant: ";
    cin >> num;

    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum > num) {
        cout << num << " is an abundant number." << endl;
    } else {
        cout << num << " is not an abundant number." << endl;
    }

    return 0;
}
