#include <bits/stdc++.h>

using namespace std;

void printSubsequences(string str, string output, int i)
{

    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }

    // exclude
    printSubsequences(str, output, i + 1);

    // include
    // output.push_back(str[i]);
    output += str[i];

    printSubsequences(str, output, i + 1);
}

int main()
{

    string s;
    cout << "enter s: ";
    cin >> s;

    string output = "";

    int i = 0;

    printSubsequences(s, output, i);

    return 0;
}