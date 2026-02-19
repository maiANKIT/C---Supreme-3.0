#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n, m;
    cout << "enter the size of word1: ";
    cin >> n;

    cout << "enter the size of word1: ";
    cin >> m;

    vector<string> word1(n);
    vector<string> word2(m);

    cout << "enter the word1 string: ";
    for (int i = 0; i < word1.size(); i++)
    {
        cin >> word1[i];
    }

    cout << "enter the word2 string: ";
    for (int i = 0; i < word2.size(); i++)
    {
        cin >> word2[i];
    }

    string x1 = "";
    for (int i = 0; i < word1.size(); i++)
    {
        x1 = x1 + word1[i];
    }

    cout << x1 << endl;

    string x2 = "";
    for (int i = 0; i < word2.size(); i++)
    {
        x2 = x2 + word2[i];
    }

    cout << x2 << endl;

    bool y = 1;
    if (x1 != x2)
    {
        y = 0;
    }

    cout << y;

    return 0;
}