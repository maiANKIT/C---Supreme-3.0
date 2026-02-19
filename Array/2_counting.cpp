#include <iostream>

using namespace std;

int main()
{

    int a[] = {0, 0, 1, 0, 1, 1, 1, 0, 0};

    int count0 = 0;

    for (int i = 0; i < 9; i++)
    {
        if (a[i] == 0)
        {
            count0++;
        }
    }
    cout << "no of zeros are: " << count0 << endl;

    int count1 = 0;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == 1)
        {
            count1++;
        }
    }
    cout << "no of one are: " << count1 << endl;

    return 0;
}