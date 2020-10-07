//1. Program to sort a 2d-matrix
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<vector <int>> a{{7,6,9},{8,4,5},{3,2,1}};
    vector<int> b;
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < a[i].size(); j++) {
            b.push_back(a[i][j]);
        }
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < b.size(); i++) {
        a[i/a.size()][i%a[0].size()] = b[i];
    }
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < a[i].size(); j++) {
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}