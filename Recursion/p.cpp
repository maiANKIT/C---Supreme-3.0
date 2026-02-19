#include <iostream>

using namespace std;

int factorial(int a)
{

    // base case
    if (a == 1)
    {
        return 1;
    }

    int ans = a * factorial(a - 1);

    return ans;
}

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    cout << "factorial of " << n << " is " << factorial(n);

    return 0;
}