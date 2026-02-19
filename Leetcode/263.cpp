#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    bool x = 0;
    int rem = 0;

    if (n % 7 == 0)
    {
    }
    else if (n == 1)
    {
        x = 1;
    }
    else
    {

        while (n != 0)
        {

            if (n / 2 == 1)
            {
                x = 1;
                // rem = n;
            }
            if (n == 1)
            {
                break;
            }

            if (n % 2 != 0)
            {
                rem = n;
                break;
            }
            n = n / 2;
        }

        int rem2 = 0;
        while (rem != 0)
        {

            if (rem / 3 == 1)
            {
                x = 1;
                // rem2 = rem;
            }
            if (rem == 1)
            {
                break;
            }
            if (rem % 3 != 0)
            {

                rem2 = rem;
                break;
            }

            rem = rem / 3;
        }

        int rem3 = 0;
        while (rem2 != 0)
        {

            if (rem2 / 5 == 1)
            {
                x = 1;
            }
            if (rem2 == 1)
            {
                break;
            }
            if (rem2 % 5 != 0)
            {

                // rem3 = rem2;
                break;
            }

            rem2 = rem2 / 5;
        }
    }

    cout << x;

    return 0;
}