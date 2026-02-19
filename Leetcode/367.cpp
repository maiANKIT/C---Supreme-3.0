#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    // int i = 1;
    // bool x = 1;
    // while (i * i > n)
    // {

    //     if (i * i != n && i * i < n)
    //     {
    //         i++;
    //     }
    //     else if (i * i != n && i * i >= n)
    //     {
    //         x = 0;
    //         break;
    //     }
    // }

    bool x = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i * i == n)
        {
            x = 1;
            break;
        }
        else if (i * i > n)
        {
            break;
        }
    }

    cout << x;

    return 0;
}