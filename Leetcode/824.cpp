#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{

    string sentence;
    getline(cin, sentence);

    string word;
    vector<string> words;

    stringstream ss(sentence);

    while (ss >> word)
    {
        words.push_back(word);
    }

    string y = "";
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u' || words[i][0] == 'A' || words[i][0] == 'E' || words[i][0] == 'I' || words[i][0] == 'O' || words[i][0] == 'U')
        {
            words[i] = words[i] + "ma";
        }
        else
        {
            char x = words[i][0];
            words[i].erase(0, 1);
            words[i] = words[i] + x + "ma";
        }

        y = y + "a";
        words[i] = words[i] + y;
    }


    string f = "";
    for (int i = 0; i < words.size(); i++)
    {
        if (i < words.size() - 1)
        {
            f = f + words[i] + " ";
        }
        else
        {
            f = f + words[i];
        }
    }

    cout << f;

    return 0;
}