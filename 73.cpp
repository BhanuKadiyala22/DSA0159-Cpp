#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Function to concatenate two strings
string concatenate(const string& a, const string& b) {
    return a + b;
}

// Function to concatenate two character arrays
char* concatenate(const char* a, const char* b) {
    char* result = new char[strlen(a) + strlen(b) + 1];
    strcpy(result, a);
    strcat(result, b);
    return result;
}

int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    string strResult = concatenate(str1, str2);
    cout << "Concatenated string: " << strResult << endl;

    const char* charArray1 = "Good ";
    const char* charArray2 = "Morning!";
    char* charArrayResult = concatenate(charArray1, charArray2);
    cout << "Concatenated character array: " << charArrayResult << endl;
    delete[] charArrayResult; // Clean up dynamic memory

    return 0;
}
