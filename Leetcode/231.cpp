#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    bool x = 0;

    for (int i = 0;; i++)
    {

        if (pow(2, i) == n)
        {

            x = 1;
            break;
        }
        else if (pow(2, i) > n)
        {
            break;
        }
    }

    cout << x;

    return 0;
}