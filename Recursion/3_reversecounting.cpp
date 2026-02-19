#include <iostream>

using namespace std;

void counting(int n)
{

    // base case
    if (n == 0)
    {
        return;
    }

    // processing
    cout << n << " ";

    // recursive relation
    counting(n - 1);
}

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    counting(n);

    return 0;
}