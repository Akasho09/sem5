#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str = "Hello, World!";
    char charArray[50]; // Make sure the array is large enough to hold the string

    strcpy(charArray, str.c_str()); // Copy string to char array

    cout << "Char Array: " << charArray << endl;

    return 0;
}
