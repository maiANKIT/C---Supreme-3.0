#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    int count = 0;

    for (int i = 1, j = 1; n >= 0; i++, j++)
    {

        if (n - j < 0)
        {
            break;
        }
        else
        {
            count++;
            n = n - i;
        }
    }

    cout << count;

    return 0;
}