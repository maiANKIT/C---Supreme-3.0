#include <iostream>

using namespace std;

int factorial(int n)
{

    // base case
    if (n == 1)
    {
        return 1;
    }

    int ans = n * factorial(n - 1);
    return ans;
}

int main()
{

    int n;
    cout << "enter the vale: ";
    cin >> n;

    int ans = factorial(n);

    cout << "factorial of " << n << " is " << ans << endl;

    return 0;
}