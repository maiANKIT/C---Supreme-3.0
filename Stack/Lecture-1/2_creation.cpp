#include <bits/stdc++.h>

using namespace std;

class Stack
{

public:
    // properties
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {

        if (size - top > 1)
        {

            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {

        if (top == -1)
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    int getTop()
    {

        if (top == -1)
        {
            cout << "there is no element in stack" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    // number of valid number in stack
    int getSize()
    {
        return top + 1;
    }

    // empty
    bool isEmpty()
    {

        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{

    Stack s(10);

    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.pop();

    cout << "size of stack: " << s.getSize() << endl;

    while (!s.isEmpty())
    {

        cout << s.getTop() << " ";
        s.pop();
    }

    return 0;
}