#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string word1;
    cout << "enter the word1: ";
    cin >> word1;

    string word2;
    cout << "enter the word2: ";
    cin >> word2;

    string ans = "";

    for (int i = 0, j = 0; i < word1.size() || j < word2.size(); i++, j++)
    {

        ans = ans + word1[i] + word2[j];
    }

    cout << "ans: " << ans << " .";

    return 0;
}