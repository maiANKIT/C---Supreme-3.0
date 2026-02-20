#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string address;
    cout << "enter the string: ";
    cin >> address;

    string ans = "";

    for (int i = 0; i < address.size(); i++)
    {

        if (address[i] == '.')
        {
            ans = ans + "[.]";
        }
        else
        {
            ans = ans + address[i];
        }
    }

    cout << "final ans: " << ans;

    return 0;
}