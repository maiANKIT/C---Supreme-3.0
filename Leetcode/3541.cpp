#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    cin >> s;

    sort(s.begin(), s.end());

    vector<int>

        int countV = 0;
    int couta = 0;
    int coute = 0;
    int couti = 0;
    int couto = 0;
    int coutu = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            couta++;
        }
        else if (s[i] == 'e')
        {
            coute++;
        }
        else if (s[i] == 'i')
        {
            couti++;
        }
        else if (s[i] == 'o')
        {
            couto++;
        }
        else if (s[i] == 'u')
        {
            coutu++;
        }
    }

    return 0;
}