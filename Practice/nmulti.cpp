#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{

    double x;
    int n;
    cin >> x >> n;

    if (x > -100 && x < 100 && n > INT_MIN && n < INT_MAX)
    {
        cout << pow(x, n);
    }

    if (n >= INT_MAX)
    {
        cout << "0";
    }
    return 0;
}