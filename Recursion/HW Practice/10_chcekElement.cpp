#include <iostream>
#include <string>

using namespace std;

bool checkkey(string s, int key, int size, int i)
{

    if (i >= size)
    {
        return false;
    }

    if (s[i] == key)
    {
        return true;
    }

    i++;
    return checkkey(s, key, size, i);
}

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    char key;
    cout << "enter the char to find: ";
    cin >> key;

    int i = 0;
    int size = s.size();
    bool ans = checkkey(s, key, size, i);
    cout << ans;

    return 0;
}