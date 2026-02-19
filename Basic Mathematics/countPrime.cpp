#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    int i = 2;
    int j = 2;
    int count = 0;

    // if (n % 2 != 0)
    // {

    // if (n == 2)
    // {
    //     count++;
    // }

    while (i <= n)
    {

        if (i % j != 0 && i % 2 != 0)
        {
            count++;
            i += 2;
            j = 2;
        }
        else if (i % j == 0 && i > j)
        {
            j++;
        }
        else if (i % j == 0 && j == i)
        {
            i++;
            j = 2;
        }
    }
    //}
    // else
    // {

    //     while (i <= n)
    //     {

    //         if (i % j != 0)
    //         {
    //             count++;
    //             i += 2;
    //             j = 2;
    //         }
    //         else if (i % j == 0 && i > j)
    //         {
    //             j++;
    //         }
    //         else if (i % j == 0 && j == i)
    //         {
    //             i++;
    //             j = 2;
    //         }
    //     }
    // }

    cout << count;

    return 0;
}