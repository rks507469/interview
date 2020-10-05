//5. Can a program be compiled without main() function
/*
we can't run a profram without a main function, but we can create an illusion that we are not using a main function.
*/
#include <iostream>
#define _nomain main
using namespace std;
int _nomain() {
    cout << "This is running from no main function" << endl;
    return 0;
}