# EXPERIMENT 18
# AIM:
To Implement Stack Implementation Using Array.

# THEORY:
Stack is a linear data structure which follows LIFO principle. In this article, we will learn how to implement Stack using Arrays.
In Array-based approach, all stack-related operations are executed using arrays. Let’s see how we can implement each operation on the stack utilizing the Array Data Structure.

Push: The operation of adding an element to the top of the stack. Example: If you push 5 onto an empty stack, the stack now contains [5].

Pop: The operation of removing the top element from the stack. Example: If you pop from a stack containing [5, 10], it removes 10 and leaves [5].

Peek (or Top): A function that returns the top element of the stack without removing it. This operation is not included in the initial implementation but is commonly used.

Display: The operation to show all elements currently in the stack.

1. STACK OPERATIONS USING ARRAY:
```
#include <iostream>
using namespace std;

const int n = 100;
int stack[n], top = -1;

void push(int val) {
    if (top >= n - 1) {
        cout << "Stack overflow" << endl;
    } else {
        stack[++top] = val;
    }
}

void pop() {
    if (top < 0) {
        cout << "Stack underflow" << endl;
    } else {
        cout << "The popped element is: " << stack[top--] << endl;
    }
}

void display() {
    if (top >= 0) {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is empty" << endl;
    }
}

int main()
{
    int ch,val;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) display stack"<<endl;
    cout<<"4) exit"<<endl;

    do
    {
        cout<<"enter choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"enter the value that has to be pushed"<<endl;
                cin>>val;
                push(val);
                break;
            }

            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"exit"<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid choice"<<endl;
            }
        }
    }
    while (ch!=4);
    return 0;
}
```
OUTPUT:

![image](https://github.com/user-attachments/assets/69ea7b48-c5d2-4b8a-b1f7-7b1c52dd9d73)


2. ARRAY BASED STACK IMPLEMENTATION:
```
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
```
OUTPUT:

![image](https://github.com/user-attachments/assets/05466bf8-247d-493b-ac48-e52ea184ba30)


3. CLASS BASED STACK IMPLEMENTATION:
```
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
```
OUTPUT:

![image](https://github.com/user-attachments/assets/74d408eb-0772-4aa5-a8a7-850e45d432c1)


# CONCLUSION:
The implementation of a stack using an array demonstrates the basic functionality of a stack—LIFO (Last In, First Out). In this approach:

Push Operation: Adds elements to the top of the stack, and checks for stack overflow when trying to exceed the maximum array size.
Pop Operation: Removes and returns the element from the top of the stack, checking for underflow if the stack is empty.
Display Operation: Prints all the current elements in the stack in reverse order (from top to bottom).
This implementation is efficient for a fixed-size stack. However, it is constrained by the array's static size, meaning if the stack grows beyond the array's limit, overflow occurs. Dynamic alternatives like linked lists or dynamic resizing arrays can be used for flexibility in real-world applications.
