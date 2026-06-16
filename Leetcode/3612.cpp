#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cout<<"enter s: ";
    cin>>s;

    string a = "";
    for(int i = 0; i<s.size(); i++){

        if(s[i] >= 'a' && s[i] <= 'z'){
            a = a + s[i];
        }
        else if(s[i] == '*'){
            if(a.size() == 0) continue;
            a.erase(a.size() - 1, 1);
        }
        else if(s[i] == '#'){
            a = a + a;
        }
        else if(s[i] == '%'){
            reverse(a.begin(), a.end());
        }

    }

    cout<<a<<endl;

   return 0;
}