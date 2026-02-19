// this is my method

#include <iostream>

using namespace std;

int main()
{

    int a[] = {1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};
    int count[11] = {0};

    // for (int i = 0; i < 11; i++)
    // {
    //     cout << count[i] << endl;
    // }

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (a[i] == a[j])
            {
                count[i]++;
            }
        }
    }

    for (int i = 0; i < 11; i++)
    {
        if (count[i] == 1)
        {
            cout << a[i];
        }
    }

    return 0;
}