#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    bool x = 1;
    int rem = 0;

    if (n <= 0)
    {
        x = 0;
    }
    else if (n > 0)
    {

        while (n >= 4)
        {
            n = n - 4;
            // rem = n % 4;
        }
    }

    if (rem != 0)
    {
        x = 0;
    }

    cout << x;

    return 0;
}