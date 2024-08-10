#include <iostream>
#include <string>
using namespace std;
int countCharacters(const string& str) {
    return str.length();
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Number of characters in the string: " << countCharacters(str) << endl;

    return 0;
}
