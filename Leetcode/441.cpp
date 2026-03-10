#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    // int x = 1;
    int count = 0;

    for (int i = 1, j = 1; i < n && j < n; i++, j++)
    {

        int x = n - i;
        if (x - j < 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    cout << count;

    return 0;
}