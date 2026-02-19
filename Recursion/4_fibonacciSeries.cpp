#include <iostream>

using namespace std;

void fibonacci(int n)
{

    // base case
    if (n == 1)
    {
        return;
    }
    if (n == 2)
    {
        return;
    }

    // recursive relation

    int a = fibonacci(n - 1) + fibonacci(n - 2);
    fibonacci(n - 1);
    cout << fibonacci(n - 1) + fibonacci(n - 2);

    // cout << ans << endl;
    // return ans;
}

int main()
{

    int n;
    cout << "enter the n: ";
    cin >> n;

    cout << fibonacci(n) << " ";

    return 0;
}