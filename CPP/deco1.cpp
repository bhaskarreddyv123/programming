#include <iostream>
#include <string>
using namespace std;

// Function to repeat a string `num` times
string no_of_times(string str, int num) {
    string result;
    if (num == 0 || num == 1) {
        return str; // If num is 0 or 1, return the string as-is
    }

    while (num > 0) {
        result += str; // Append the string
        num--;
    }
    return result; // Return the final repeated string
}

int main() {
    string str, str1, decodestr;
    int num = 0, i = 0;

    cout << "Enter string: ";
    cin >> str;

    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            // Build the multiplier (handles multi-digit numbers)
            num = num * 10 + (str[i] - '0');
        } else if (str[i] == '[') {
            i++;
            str1 = ""; // Reset str1 for the new substring

            // Extract the substring inside the brackets
            while (str[i] != ']' && str[i] != '\0') {
                str1 += str[i]; // Append each character to str1
                i++;
            }

            // Repeat the substring `num` times and append to the decoded string
            decodestr += no_of_times(str1, num);
            num = 0; // Reset the multiplier
        }
        i++;
    }

    cout << "Decoded string: " << decodestr << endl;
    return 0;
}

