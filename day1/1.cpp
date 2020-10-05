// 1. Program to Convert a Decimal Number to Binary & Count the Number of 1s
#include <bits/stdc++.h>
using namespace std;

int main() {
    int decimal, count = 0;
    cin >> decimal;
    string binary = bitset<64>(decimal).to_string();
    cout << binary << endl;
    for(int i = 0; i < binary.length(); i++) {
        if(binary[i] == '1') {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}