#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "enter the number: ";
    cin >> num;
    int num1 = num;

    int sum = 0;
    bool x = 0;
    for (int i = 1; i < num; i++)
    {
        // num = num / i;
        if (num % i == 0)
        {
            sum = sum + i;
        }
        num = num1;
    }

    if (num1 == sum)
    {
        x = 1;
    }

    cout << x;

    return 0;
}