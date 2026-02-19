#include <iostream>

using namespace std;

int main()
{

    int a;
    cout << "enter a: ";
    cin >> a;

    int b;
    cout << "enter b: ";
    cin >> b;

    if (a == 0)
    {
        cout << b << endl;
    }
    else if (b == 0)
    {
        cout << a << endl;
    }
    else if (a > 0 && b > 0)
    {

        while (a > 0 && b > 0)
        {
            if (a > b)
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
    }

    if (a == 0)
    {
        cout << b;
    }
    else if (b = 0)
    {
        cout << a;
    }

    return 0;
}