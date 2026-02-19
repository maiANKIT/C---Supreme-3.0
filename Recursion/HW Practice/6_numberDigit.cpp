#include <iostream>

using namespace std;

void digit(int n)
{

    if (n == 0)
    {
        return;
    }

    digit(n / 10);

    cout << n % 10 << " ";
}

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    digit(n);

    return 0;
}