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
    int vowelcount = 0;
    int consto = 0;

    if (word.size() < 3)
    {
        x = 0;
    }
    else
    {
        for (int i = 0; i < word.size(); i++)
        {

            if ((word[i] > 31 && word[i] < 48) || (word[i] > 57 && word[i] < 65) || (word[i] > 90 && word[i] < 97) || (word[i] > 122 && word[i] < 127))
            {
                x = 0;
                break;
            }

            if (word[i] == 65 || word[i] == 97 || word[i] == 69 || word[i] == 101 || word[i] == 73 || word[i] == 105 || word[i] == 79 || word[i] == 111 || word[i] == 85 || word[i] == 117)
            {
                vowelcount++;
            }

            if ((word[i] > 65 && word[i] < 69) || (word[i] > 69 && word[i] < 73) || (word[i] > 73 && word[i] < 79) || (word[i] > 79 && word[i] < 85) || (word[i] > 85 && word[i] <= 90) || (word[i] > 98 && word[i] < 101) || (word[i] > 101 && word[i] < 105) || (word[i] > 105 && word[i] < 111) || (word[i] > 111 && word[i] < 117) || (word[i] > 117 && word[i] <= 122))
            {
                consto++;
            }
        }
    }

    if (consto == 0 || vowelcount == 0)
    {
        x = 0;
    }

    cout << x;

    return 0;
}