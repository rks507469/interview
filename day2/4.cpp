//4. How to traverse an array using pointers
#include <iostream>
using namespace std;

int main() {
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int* p = &a[0];
    for(int i = 0; i < 10; i++) {
        cout << *p << " ";
        p++;
    }
    return 0;
}
