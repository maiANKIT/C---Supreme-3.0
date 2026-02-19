#include <iostream>

using namespace std;

int main()
{

    // int num;
    // cout<<"enter a number: ";
    // cin>>num;

    int num;
    cout << "enter a number: ";
    cin >> num;

    int rev = 0;

    while (num != 0)
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    cout << "value is " << rev;

    return 0;
}