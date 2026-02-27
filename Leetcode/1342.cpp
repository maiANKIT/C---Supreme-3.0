#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "enter the num: ";
    cin >> num;

    int count = 0;
    int i = 0;

    while (num != 0)
    {

        if (num % 2 == 1)
        {
            num = num - 1;
            count++;
        }
        else
        {
            num = num / 2;
            count++;
        }
    }

    cout << "ans: " << count;

    return 0;
}