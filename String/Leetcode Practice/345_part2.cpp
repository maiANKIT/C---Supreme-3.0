#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {

        if ((s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u') && (s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I' || s[j] == 'O' || s[j] == 'o' || s[j] == 'U' || s[j] == 'u'))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if ((s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u') && !(s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I' || s[j] == 'O' || s[j] == 'o' || s[j] == 'U' || s[j] == 'u'))
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << s;

    return 0;
}