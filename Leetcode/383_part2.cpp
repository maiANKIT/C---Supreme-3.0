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

    bool x = 0;
    int count = 0;

    if (ransomNote.size() > magazine.size())
    {
        x = 0;
    }
    else
    {

        int i = 0;
        int j = 0;

        while (i != magazine.size())
        {

            if (ransomNote[i] == magazine[j])
            {
                count++;
                i++;
                j++;
            }
            else if (ransomNote[i] != magazine[j])
            {
                j++;
            }
        }
    }

    return 0;
}