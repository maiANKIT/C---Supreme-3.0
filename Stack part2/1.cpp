#include <iostream>

using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {

        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // function
    void push(int data)
    {

        if (size - top > 1)
        {
            // space available
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {

        if (top == -1)
        {
            cout << "Stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    int getTop()
    {

        if (top == -1)
            cout << "stack is empty" << endl;
        else
            return arr[top];
    }
    // number of valid number of element
    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {

        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{

    Stack s(10);

    // insertion;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.isEmpty())
    {

        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;

    cout << "size: " << s.getSize() << endl;

    return 0;
}