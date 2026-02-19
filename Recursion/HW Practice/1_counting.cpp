#include <iostream>

using namespace std;

void Counting(int n)
{

    if (n == 0)
    {
        return;
    }

    Counting(n - 1);

    cout << n << " ";
}

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    Counting(n);

    return 0;
}