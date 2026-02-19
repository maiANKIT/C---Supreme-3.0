#include <iostream>

using namespace std;

void counting(int n)
{

    // base case
    if (n == 0)
    {
        return;
    }

    // recursive relation
    counting(n - 1);

    // processing
    cout << n << " ";
}

void Reversecounting(int n)
{

    // base case
    if (n == 0)
    {
        return;
    }

    // processing
    cout << n << " ";

    // recursive call
    Reversecounting(n - 1);
}

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    counting(n);
    cout << endl;
    Reversecounting(n);

    return 0;
}