#include <bits/stdc++.h>

using namespace std;

void digits(int n)
{

    if (n == 0)
        return;

    digits(n / 10);

    cout << n % 10 << " ";
}

int main()
{

    int n;
    cout << "enter value: ";
    cin >> n;

    digits(n);

    return 0;
}