// 2. Program to Find the Second Largest & Smallest Elements in an Array.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10 ,20, 14, 53, 24, 12, 65, 34, 78, 340, 32};
    sort(arr, arr +(sizeof(arr)/sizeof(arr[0])));
    cout << "Second Largest : " << arr[(sizeof(arr)/sizeof(arr[0]))-2] << endl;
    cout << "Smallest : " << arr[0] << endl;
    return 0;
}