#include <iostream>
using namespace std;

#define size 5
#define error -9999

class stack 
{
    int top, ar[size];
public:
    stack() 
    {
        top = -1;
        ar[0]=0;
    }
    void push(int);
    int pop();
    int peak();
    void disp();
};
void stack::push(int num) 
{
    if (top == size - 1) 
    {
        cout << "Stack overflow: stack is full" << endl;
        return;
    } else 
    {
        ar[++top] = num;
    }
}
int stack::pop() {
    int val;
    if (top == -1) 
    {  // Corrected this line
        cout << "Stack underflow: stack is empty" << endl;
        return error;
    } else 
    {
        val = ar[top--];
        return val;
    }
}
int stack::peak() 
{
    if (top == -1) 
    {
        cout << "Stack underflow: stack is empty" << endl;
        return error;
    } else 
    {
        return ar[top];
    }
}
void stack::disp() 
{
    if (top == -1) 
    {
        cout << "Stack underflow: stack is empty" << endl;
        return;
    } else 
    {
        for (int i = 0; i <= top; i++) 
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
}
int main() 
{
    stack s1;
    s1.push(10);
    s1.push(7);
    s1.push(4);
    int val = s1.pop();
    cout << "Popped value: " << val << endl;
    int top = s1.peak();
    cout << "Top value: " << top << endl;
    cout << "Stack contents: ";
    s1.disp();
    return 0;
}