#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int x;
    int y;

    cin >> x >> y;

    int ans = log(x) - log(y);

    cout << ans + 1;

    return 0;
}