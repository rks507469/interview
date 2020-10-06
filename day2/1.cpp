//1. Program to sort a 2d-matrix
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<vector <int>> a{{9,8,7},{6,5,4},{3,2,1}};
    vector<vector <int>> r;
    vector<int> b;
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < a[i].size(); j++) {
            b.push_back(a[i][j]);
        }
    }
    sort(b.begin(), b.end());
    //not working
    int k = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            r[i].push_back(b[k]);
            k++;
        }
    }
    for(int i = 0; i < r.size(); i++) {
        for(int j = 0; j < r[i].size(); j++) {
           cout << r[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}