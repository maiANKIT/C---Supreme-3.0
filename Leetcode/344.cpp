#include <iostream>
#include <string>
#include <vector>

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

    vector<char> s1(n);
    for (int i = s.size() - 1, j = 0; i <= 0, j < s.size(); i--, j++)
    {
        s1[i] = s[j];
    }

    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i] << " ";
    }

    return 0;
}