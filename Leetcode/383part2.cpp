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

    int i = 0;
    int j = 0;
    int count = 0;

    while (j < ransomNote.size())
    {

        if (ransomNote[j] == magazine[i])
        {
            count++;
            magazine.erase(i, 1);
            j++;
        }
        else if (ransomNote[j] < magazine[i])
        {
            i++;
        }
        else if (ransomNote[j] > magazine[i] && count < ransomNote.size())
        {
            // j++;
            x = 0;
            break;
            // i = 0;
        }

        if (i == magazine.size())
        {
            i = 0;
        }
    }

    if (count < ransomNote.size())
    {
        x = 0;
    }
    else if (count > ransomNote.size())
    {
        x = 0;
    }

    cout << x;

    return 0;
}