#include <iostream>

using namespace std;

int main()
{

    int x;
    cin >> x;

    int y;
    cin >> y;

    int z;
    cin >> z;

    int x1 = abs(z - x);
    int y1 = abs(z - y);

    if (x1 == y1)
        cout << 0;
    else if (x1 > y1)
        cout << 2;
    else
        cout << 1;

    return 0;
}