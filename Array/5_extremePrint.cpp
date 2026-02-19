// my method quite wrong need improvement because last repeat two time in case of odd

#include <iostream>

using namespace std;

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 9; i++)
    {
        if (i <= 9 / 2)
        {
            cout << a[i] << " ";
            cout << a[8 - i] << " ";
        }
        else
        {
            break;
        }
    }

    return 0;
}