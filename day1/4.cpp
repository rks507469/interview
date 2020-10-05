//4. Program to Remove all Characters in Second String which are present in First String.
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char s1[100], s2[100], str_rem[100];
    int i = 0, j = 0, k = 0;
    cin >> s1 >> s2;
    for (i = 0; s1[i]!= '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                continue;
            }
            else {
                str_rem[k] = s2[j];
                k++;
            }
        }
        str_rem[k] = '\0';
        strcpy(s2, str_rem);
        k = 0;
    }
    cout << str_rem << endl;
    return 0;
}