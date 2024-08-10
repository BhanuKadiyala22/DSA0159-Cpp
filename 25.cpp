#include <iostream>
#include <unordered_set>
using namespace std;
int sumOfSquares(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;

    cout << "Enter an integer to check if it is a happy number: ";
    cin >> num;

    unordered_set<int> seen;

    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        num = sumOfSquares(num);
    }

    if (num == 1) {
        cout << "It is a happy number." << endl;
    } else {
        cout << "It is not a happy number." << endl;
    }

    return 0;
}
