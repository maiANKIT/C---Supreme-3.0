#include <iostream>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    getline(cin, s);

    bool x = 1;
    
    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else if (s[i] != s[j] && s[j] == s[i + 1])
        {
            s.erase(i, 1);
            i++;
            break;
        }
        else if (s[i] != s[j] && s[i] == s[j - 1])
        {
            s.erase(j, 1);
            break;
            j--;
        }
        
        else{
            break;
        }
    }

    cout<<s<<endl;

    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            x = 0;
            break;
        }
    }

    if (x == 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}