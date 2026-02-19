#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    int m;
    cout << "enter the number m: ";
    cin >> m;

    int num1 = 0;
    int num2 = 0;

    for (int i = 1; i <= n; i++)
    {

        if (i % m != 0)
        {
            num1 = num1 + i;
        }
        else
        {
            num2 = num2 + i;
        }
    }

    cout << num1 - num2 << endl;

    return 0;
}