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

    int i = 0;
    int j = 0;
    while (i < word1.size() || j < word2.size())
    {

        if (i < word1.size())
        {
            ans = ans + word1[i];
            i++;
        }
        if (j < word2.size())
        {
            ans = ans + word2[j];
            j++;
        }
    }

    cout << "ans: " << ans;

    return 0;
}