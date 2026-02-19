#include <iostream>

using namespace std;

int main()
{

    int a[] = {1, 2, 3, 2, 4, 6, 2, 9, 9, 4, 1, 2};

    int count2 = 0;

    for (int i = 0; i < 12; i++)
    {
        if (a[i] == 2)
        {
            count2++;
        }
    }
    cout << "number of twos are: " << count2 << endl;

    return 0;
}