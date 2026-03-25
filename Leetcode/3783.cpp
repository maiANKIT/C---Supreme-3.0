#include <iostream>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    int x = n;

    int reverse = 0;

    while (x > 0)
    {

        reverse = reverse * 10 + x % 10;
        x = x / 10;
    }

    
    cout << reverse;

    return 0;
}