#include <iostream>
using namespace std;

int main() {
    string str;
    int start = 0, end;

    cout << "Enter a string to check if it is a palindrome: ";
    cin >> str;

    end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        ++start;
        --end;
    }

    if (isPalindrome) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
