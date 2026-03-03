#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<char> chars(n);
    for (int i = 0; i < chars.size(); i++)
    {
        cin >> chars[i];
    }

    int count = 1;
    string s = "";

    cout << "chars.size(): " << chars.size() << endl;

    for (int i = 0; i < chars.size(); i++)
    {
        if (i < chars.size() - 1 && chars[i] == chars[i + 1])
        {
            count++;
        }
        else
        {
            if (count != 1)
            {
                s = s + chars[i] + to_string(count);
                count = 1;
            }
            else
            {
                s = s + chars[i];
                count = 1;
            }
        }

        cout << "this is case 1" << endl;
    }

    cout << s << endl;

    cout << "ans: " << s.size() << endl;

    return 0;
}