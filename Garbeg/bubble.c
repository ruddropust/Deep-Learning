#include <iostream>
using namespace std;

int main() {
    char s[100];
    int i = 0;

    cout << "Enter characters (end with '$'): ";

    while (i < 99) { // Ensure we don't exceed the array size
        cin.get(s[i]); // Read a single character (including spaces)
        if (s[i] == '$') {
            break; // Exit the loop if '$' is encountered
        }
        i++; // Move to the next position in the array
    }

    s[i] = '\0'; // Null-terminate the string

    cout << "You entered: " << s << endl;
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    cout << "Length of the string: " << length << endl;

    return 0;
}