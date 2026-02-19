#include <iostream>

using namespace std;

int fibonacci(int n)
{

    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    fibonacci(n - 1);
    return ans;
}

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    cout << fibonacci(n);

    return 0;
}