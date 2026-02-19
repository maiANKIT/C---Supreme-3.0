#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n;
    cout << "enter a number: ";
    cin >> n;

    int r = 0;
    int original = n;
    if (n > 0)
    {
        while (n != 0)
        {

            int d = n % 10;
            r = r * 10 + d;
            n = n / 10;
        }

        cout << r << endl;

        if (original == r)
        {
            cout << r;
        }
        else
        {
            cout << "Not a pallindrome";
        }
    }
    else if (n == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << "Not a pallindrome" << endl;
    }

    return 0;
}