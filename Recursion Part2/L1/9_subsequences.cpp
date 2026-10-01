#include <bits/stdc++.h>

using namespace std;

void printSubsequences(string str, string output, int i, vector<string> &ans)
{

    if (i >= str.length())
    {
        // cout << "count: " << count << endl;
        cout << output << endl;
        return;
    }

    // exclude
    printSubsequences(str, output, i + 1, ans);

    // include
    // output.push_back(str[i]);
    output += str[i];
    ans.push_back(output);

    printSubsequences(str, output, i + 1, ans);
}

int main()
{

    string s;
    cout << "enter s: ";
    cin >> s;

    string output = "";

    int i = 0;

    vector<string> ans;

    printSubsequences(s, output, i, ans);

    cout << "ans: " << ans.size() << endl;

    return 0;
}