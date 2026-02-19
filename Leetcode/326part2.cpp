#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    bool x = 1;
    int y = 1;

    if (n <= 0)
    {
        x = 0;
    }
    else if (n > 1)
    {

        for (int i = 0;; i++)
        {
            y = y * 3;
            if (y == n)
            {
                break;
            }
            else if (y > n)
            {
                x = 0;
                break;
            }
        }
    }

    cout << x;

    return 0;
}