//7. What is pointer on pointer.
/*
when we store an address on pointer in the another pointer it becomes a double pointer or pointer to pointer
*/
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;
    int** p2 = &p;
    cout << **p2 << endl;
    return 0;
}