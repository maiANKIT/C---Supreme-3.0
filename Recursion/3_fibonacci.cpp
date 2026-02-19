#include <iostream>

using namespace std;

int fibonacci(int n)
{

    // base case
    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    // recursive relation
    int ans = fibonacci(n - 1) + fibonacci(n - 2);

    return ans;
}

int main()
{

    // we are finding nth term of fibonacci

    int n;
    cout << "enter the n: ";
    cin >> n;

    int ans = fibonacci(n);

    cout << ans;

    return 0;
}