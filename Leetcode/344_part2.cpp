#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    cout << "enter the char: ";
    vector<char> s(n);
    for (int i = 0; i < s.size(); i++)
    {
        cin >> s[i];
    }

    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}