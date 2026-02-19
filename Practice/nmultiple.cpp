#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int x;
    int n;

    cout << "Enter the number: ";
    cin >> x;

    cout << "Enter the power value: ";
    cin >> n;

    if (x > -100 && x < 100 && n > INT_MIN && n < INT_MAX)
    {
        int multiple = 1;

        for (int i = 1; i <= n; i++)
        {
            multiple = multiple * x;
        }

        cout << multiple << endl;
    }

    return 0;
}