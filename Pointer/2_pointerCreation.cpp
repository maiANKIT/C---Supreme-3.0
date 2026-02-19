#include <iostream>
#include <string>

using namespace std;

int main()
{

    int a = 5;

    // create a pointer
    int *ptr = &a;

    // access the value ptr is pointing to
    cout << *ptr << endl;

    cout << "address of a: " << &a << endl;
    cout << "address of a using ptr: " << ptr << endl;
    cout << "address of ptr: " << &ptr << endl;

        return 0;
}