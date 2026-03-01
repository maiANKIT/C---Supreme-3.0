#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    int count = 0;
    bool x = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 3)
    {
        x = 1;
    }

    cout << "ans: " << x;

    return 0;
}