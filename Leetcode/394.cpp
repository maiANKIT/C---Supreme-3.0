#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// string finalANS(string ans, string s)
// {

//     for(int i = 0; )

// }

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    vector<int> numIndex;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] >= '0' && s[i] <= '9')
        {
            numIndex.push_back(s[i] - '0');
        }
        else if (s[i] == '[' || s[i] == ']')
        {
            s.erase(i, 1);
            i--;
        }
    }

    cout << "numIndex size: " << numIndex.size() << endl;

    cout << "erased string: " << s << endl;

    string ans = "";

    vector<string> substring;
    for (int i = 1; i < s.size(); i++)
    {

        if (!(s[i] >= '0' && s[i] <= '9'))
        {

            ans = ans + s[i];
        }
        else
        {
            substring.push_back(ans);
            ans = "";
        }
    }

    substring.push_back(ans);

    cout << "substring size: " << substring.size() << endl;
    cout << "substring: ";
    for (int i = 0; i < substring.size(); i++)
    {
        cout << substring[i] << " ";
    }

    cout << endl;

    int j = 0;
    ans = "";

    for (int i = 0; j < numIndex.size(); i++)
    {

        if (i < numIndex[j])
        {
            ans = ans + substring[j];
        }
        else
        {
            i = 0;
            j++;
        }
    }

    cout << "final ans: " << ans;

    return 0;
}