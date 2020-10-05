//4. Program to Remove all Characters in Second String which are present in First String.
#include <iostream>
using namespace std;

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    char c[s1.size()];
    string res;
    for(int i = 0; i < s1.size(); i++) {
        c[i] = s1[i];
    }
   for(int i = 0; i < s1.size(); i++) {
       cout << c[i] << " ";
   }
   cout << s1.size();
    return 0;
}