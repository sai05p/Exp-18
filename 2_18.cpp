#include <iostream>
using namespace std;

#define SIZE 5
#define ERROR -9999

class Stack {
    int top;
    int ar[SIZE];
public:
    Stack() {
        top = -1;
    }
    void push(int num);
    int pop();
    int peak();
    void disp();
};
void Stack::push(int num) {
    if (top == SIZE - 1) {
        cout << "STACK OVERFLOW: STACK IS FULL" << endl;
        return;
    }
    ar[++top] = num;
}
int Stack::pop() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: STACK IS EMPTY" << endl;
        return ERROR;
    }
    return ar[top--];
}
int Stack::peak() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: STACK IS EMPTY" << endl;
        return ERROR;
    }
    return ar[top];
}
void Stack::disp() {
    if (top == -1) {
        cout << "STACK UNDERFLOW: STACK IS EMPTY" << endl;
        return;
    }
    for (int i = 0; i <= top; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}
int main() {
    Stack s1;
    s1.push(7);
    s1.push(10);
    s1.push(4);
    int val = s1.pop();
    cout << "Popped value: " << val << endl;
    int topValue = s1.peak();
    cout << "Top value: " << topValue << endl;
    cout << "Current stack: ";
    s1.disp();
    return 0;
}