#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    bool x = 1;
    int y = 0;
    if (n <= 0)
    {
        x = 0;
    }

    // int y = 0;

    else if (n >= 1)
    {
        for (int i = 0;; i++)
        {
            y = pow(3, i);

            if (y == n)
            {
                x = 1;
                break;
            }
            else if (y > n)
            {
                x = 0;
                break;
            }
        }
    }
    else if (n < 1 && n > 0)
    {
        for (int i = 0;; i--)
        {
            y = pow(3, i);

            if (y == n)
            {
                x = 1;
                break;
            }
            else if (y < n)
            {
                x = 0;
                break;
            }
        }
    }

    cout << x;

    return 0;
}