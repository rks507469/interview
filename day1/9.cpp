//9. Where is break keyword is used.
/*
Break statement is used to break out from loop.
*/
#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 10; i++) {
        if(i == 3) {
            break;
        }
        cout << i << " ";
    }
    return 0;
}