//2. Program to implement stack
#include <iostream>
#include <vector>
using namespace std;

class Stack {
    private:
        vector<int> arr;
    public:
        void push(int data) {
            arr.push_back(data);
        }
        int pop() {
            int l = arr.back();
            arr.pop_back();
            return l;
        }
        int peek() {
            return arr.back();
        }
        int size() {
            return arr.size();
        }
        void print() {
            for(int i = arr.size() - 1; i >= 0; i--) {
                cout << arr[i] << endl;
            }
        }
};

int main() {
    Stack s;
    //pushing the data into stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);
    //printing the stack
    s.print();
    //peek the stack
    cout << "Stack Size : " << s.size() << endl;
    //poping some data stack
    cout << "Pop Data : " << s.pop() << endl;
    //peek the stack
    cout << "Stack Size : " << s.size() << endl;
    //printing the stack
    s.print();
    //peek the stack
    cout << "Peek Data : " << s.peek() << endl;
    return 0;
}
