#include <iostream>

using namespace std;

void ReverseCounting(int n)
{

    if (n == 0)
    {
        return;
    }

    cout << n << " ";

    ReverseCounting(n - 1);
}

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    ReverseCounting(n);

    return 0;
}