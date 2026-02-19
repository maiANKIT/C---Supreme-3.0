#include <iostream>
#include <string>
#include <vector>

using namespace std;

void indexes(string &s, char &key, int &i, int &size, vector<int> &ans)
{

    // base case
    if (i >= size)
    {
        return;
    }

    if (s[i] == key)
    {
        ans.push_back(i);
        // cout << "found at: " << i << endl;
    }

    i++;
    return indexes(s, key, i, size, ans);
}

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    char key;
    cout << "enter the key: ";
    cin >> key;

    int i = 0;
    int size = s.size();

    vector<int> ans;

    indexes(s, key, i, size, ans);

    cout << "print indexes: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "found at: " << ans[i] << endl;
    }

    return 0;
}