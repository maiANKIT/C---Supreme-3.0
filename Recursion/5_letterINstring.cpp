#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int find(string s, int size, int i)
{

    if (i >= size)
    {
        return 0;
    }

    if (s[i])
}

int main()
{

    string s = "lovebabbar";
    int size = s.size();
    int i = 0;

    char x;
    cout << "enter the character: ";
    cin >> x;

    find(s, size, x, i);

    return 0;
}