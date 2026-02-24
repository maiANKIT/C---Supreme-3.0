#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    string s;
    cout << "enter the string: ";
    getline(cin, s);

    if (s.size() > 1)
    {

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == ' ' && i == 0)
            {
                cout << "iam in p5" << endl;
                s.erase(i, 1);

                i--;
            }

            else if (s[i] == ' ' && s[i + 1] == ' ' && i == s.size() - 2)
            {
                cout << "iam in p1" << endl;
                s.erase(i, 1);
                s.erase(i, 1);
                i = i - 2;
            }
            else if (s[i + 1] == ' ' && i == s.size() - 2)
            {
                cout << "iam in p2" << endl;
                s.erase(i + 1, 1);
                i--;
            }
            else if (s[i] == ' ' && s[i + 1] == ' ')
            {

                cout << "im in p3" << endl;
                s.erase(i, 1);
                i--;
            }
        }
    }
    else if (s == " ")
    {

        cout << "iam in p4" << endl;
        s.erase(0, 1);
    }

    cout << "pre ans: " << s << ":nothing here" << endl;
    cout << "size of pre ans: " << s.size() << endl;

    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }

    if (s.size() > 0)
    {
        count = count + 1;
    }

    cout << "ans: " << count;

    return 0;
}