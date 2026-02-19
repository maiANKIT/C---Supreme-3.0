#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string ransomNote;
    cout << "enter the string: ";
    cin >> ransomNote;

    string magazine;
    cout << "enter the string2: ";
    cin >> magazine;

    sort(ransomNote.begin(), ransomNote.end());
    sort(magazine.begin(), magazine.end());

    bool x = 1;
    int count = 0;
    if (ransomNote.size() > magazine.size())
    {

        x = 0;
    }
    else
    {

        for (int i = 0; i < ransomNote.size(); i++)
        {

            if (ransomNote[i] == magazine[i])
            {
                count++;
            }
        }
    }

    if (count != ransomNote.size())
    {
        x = 0;
    }

    cout << x;

    return 0;
}