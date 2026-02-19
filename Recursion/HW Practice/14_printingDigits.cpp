#include <iostream>
#include <vector>

using namespace std;

void digits(int num)
{

    // base case
    if (num == 0)
    {
        return;
    }

    digits(num / 10);
    cout << num % 10 << " ";
}

int main()
{

    int num;
    cout << "enter the num: ";
    cin >> num;

    // vector <int> d;

    if (num == 0)
    {
        cout << 0;
    }

    digits(num);

    return 0;
}