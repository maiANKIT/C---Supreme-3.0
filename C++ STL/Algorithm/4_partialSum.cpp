#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{

    vector<int> a(3);
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    vector<int> result(a.size());

    partial_sum(a.begin(), a.end(), result.begin());
    for (int a : result)
    {
        cout << a << " ";
    }

    cout << endl;

    return 0;
}