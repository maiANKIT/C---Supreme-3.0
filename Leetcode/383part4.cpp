#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string ransomNote;
    cout << "enter ransom: ";
    cin >> ransomNote;

    string magazine;
    cout << "enter the magazine: ";
    cin >> magazine;

    bool x = 1;
    sort(magazine.begin(), magazine.end());
    sort(ransomNote.begin(), ransomNote.end());

    int count = 0;

    int j = 0;
    int n = 0;
    for (int i = n; i < magazine.size(); i++)
    {

        if (ransomNote[j] == magazine[i])
        {
            count++;
            j++;
        }
    }

    if (count < ransomNote.size() || count > ransomNote.size())
    {
        x = 0;
    }

    cout << x;

    return 0;
}