#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    int t;
    cout << "enter the other number: ";
    cin >> t;

    vector<int> a;
    while (n != 0)
    {
        n = n / 10;
    }

    return 0;
}