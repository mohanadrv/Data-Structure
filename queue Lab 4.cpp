#include <iostream>
using namespace std;

class stack {

public:
    int top;
    int size;
    int* arr;

    stack() {
        size = 6;
        arr = new int[size];
        top = -1;
    }

    void push(int value) {
        if (top == size - 1) {
            cout << "stack is full!" << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "stack is empty!" << endl;
            return -1;
        } else {
            int value = arr[top];
            top--;
            return value;
        }
    }
};

int main() {
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    return 0;
}