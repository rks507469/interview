//8. How to print "Hello World" without semicolon.
//using Macros and if statement.
#define PRINTHW cout<<"Hello World"
#include <iostream>
using namespace std;

int main() {
    if(cout << "Hello World") {}
    cout << endl;
    PRINTHW;
    return 0;
}