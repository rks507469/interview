//3. Program to Check if a String is a Palindrome without using the Built-in Function.
#include <iostream>
using namespace std;

int main() {
    string s;
    bool b = false;
    cin >> s;
    for(int i = 0; i < s.size()/2; i++) {
        if(s[i] != s[s.size()-(i+1)]) {
            b = false;
            break;
        }
        b = true;
    }
    if(b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}