#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int sum = 0;
    int count = 0;
    int maxi = 0;
    int counttemp = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {

        if (s[i] == ')')
        {
            counttemp++;
        }
        else if (s[i] == '(' && counttemp != 0)
        {
            counttemp--;
            count += 2;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
            counttemp = 0;
        }
    }

    cout << maxi;

    return 0;
}