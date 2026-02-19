#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size of string: ";
    cin >> n;
    vector<string> strs(n);

    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }

    return 0;
}