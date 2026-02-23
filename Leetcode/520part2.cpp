#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string word;
    cout << "enter the string: ";
    cin >> word;

    bool x = 1;
    if (word.size() == 1 || ((word[0] >= 65 && word[0] <= 90) && word.size() == 2) || ((word[0] >= 97 && word[0] <= 122) && (word[1] >= 97 && word[1] <= 122) && word.size() == 2))
    {

        cout << "answer in case1" << endl;
    }
    else if (((word[0] >= 65 && word[0] <= 90) && (word[1] >= 65 && word[1] <= 90)))
    {

        cout << "answer in case2" << endl;

        for (int i = 2; i < word.size(); i++)
        {

            if (word[i] >= 97 && word[i] <= 122)
            {
                x = 0;
                break;
            }
        }
    }
    else if (((word[0] >= 65 && word[0] <= 90) && (word[1] >= 97 && word[1] <= 122)))
    {

        cout << "answer in case3" << endl;

        for (int i = 2; i < word.size(); i++)
        {

            if (!(word[i] >= 97 && word[i] <= 122))
            {
                x = 0;
                break;
            }
        }
    }
    else if ((word[0] >= 97 && word[0] <= 122))
    {

        cout << "answer in case4" << endl;
        for (int i = 1; i < word.size(); i++)
        {

            if (word[i] >= 65 && word[i] <= 90)
            {
                x = 0;
                break;
            }
        }
    }

    cout << x;

    return 0;
}