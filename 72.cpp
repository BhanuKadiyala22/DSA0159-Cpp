#include <iostream>
using namespace std;

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum of two doubles
double max(double a, double b) {
    return (a > b) ? a : b;
}

// Function to find the maximum of two characters
char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = max(3, 5);
    double doubleMax = max(3.5, 2.7);
    char charMax = max('a', 'z');

    cout << "Max of integers: " << intMax << endl;
    cout << "Max of doubles: " << doubleMax << endl;
    cout << "Max of characters: " << charMax << endl;

    return 0;
}
