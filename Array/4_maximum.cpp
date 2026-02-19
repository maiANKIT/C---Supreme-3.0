// this method is only for positive number

#include <iostream>

using namespace std;

int main()
{

    int a[] = {2, 4, 1, 6, 8, 9, 0};

    int max = 0;
    int temp;

    for (int i = 0; i < 7; i++)
    {
        if (a[i] > max)
        {
            temp = a[i];
            a[i] = max;
            max = temp;
        }
    }
    cout << "Maximum number is " << max << endl;

    return 0;
}