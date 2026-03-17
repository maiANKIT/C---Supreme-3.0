#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    cin >> s;

    // int x = stoi(s);

    // string ans = "";
    // if(x & 2 == 0){
    //     ans = to_string(x);
    // }
    // else{

    //     while(x>)

    // }

    int i = s.size() - 1;
    while (i >= 0)
    {

        if (s[i] % 2 == 0)
        {
            s.erase(i, -1);
            // i++;
        }
        else
        {
            break;
        }
        i--;
    }

    cout << s;

    return 0;
}