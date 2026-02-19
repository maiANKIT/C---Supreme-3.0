#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string word1;
    cout << "enter the string: ";
    cin >> word1;

    string word2;
    cout << "enter the string2: ";
    cin >> word2;

    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    cout << "sorted: ";
    cout << word1 << " ";
    cout << word2 << endl;

    return 0;
}