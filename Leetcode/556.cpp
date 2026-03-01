#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    string x = to_string(n);
    if (x[0] < x[x.size() - 1])
    {
        swap(x[0], x[x.size() - 1]);
    }

    long long num = stoi(x);

    if (num > INT_MAX || num == n)
    {
        num = -1;
    }

    cout << num;

    return 0;
}