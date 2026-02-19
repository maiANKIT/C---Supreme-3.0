#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int mini(int a[], int size, int i, int &y)
{

    if (i >= size)
    {
        return 0;
    }

    if (a[i] < y)
    {
        y = a[i];
    }

    mini(a, size, i + 1, y);

    return y;
}

int main()
{

    int a[] = {12, 65, 8, 9, 312};
    int size = sizeof(a) / sizeof(a[0]);
    int y = INT_MAX;
    int i = 0;

    int x = mini(a, size, i, y);

    cout << x;

    return 0;
}