#include <iostream>
#include <string>

using namespace std;

// function to encode a string
string encode(string s, int j) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (i >= j && isalpha(s[i])) {
            result += char(int(s[i]) + 2);
        } else {
            result += s[i];
        }
    }
    return result;
}

// function to decode an encoded string
string decode(string s, int j) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (i >= j && isalpha(s[i])) {
            result += char(int(s[i]) - 2);
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    string s;
    int j;

    // take input string and integer value from user
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter an integer value: ";
    cin >> j;

    // encode the input string
    string encodedString = encode(s, j);

    // output the encoded string
    cout << "Encoded string: " << encodedString << endl;

    // decode the encoded string
    string decodedString = decode(encodedString, j);

    // output the decoded string
    cout << "Decoded string: " << decodedString << endl;

    return 0;
}
