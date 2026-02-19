#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cout << "enter the number: ";
    cin >> num;

    int sum = 0;

    while (num != 0)
    {

        sum = num % 10 + sum;
        num = num / 10;
    }

    int x = 0;

    if (sum <= 9)
    {
        cout << sum << endl;
    }
    else
    {
        while (sum != 0)
        {

            x = sum % 10 + x;
            sum = sum / 10;
        }
        cout << x << endl;
    }

    int x2 = 0;
    if (x > 9)
    {
        while (x != 0)
        {

            x2 = x % 10 + x2;
            x = x / 10;
        }

        cout << x2 << endl;
    }

        return 0;
}