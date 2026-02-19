#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    if (n % 2 != 0)
    {
        n = n * 2;
    }

    cout << n;

    return 0;
}