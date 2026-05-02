#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout<<"enter string: ";
    cin>>s;

    int count = 0;

    for(int i = 0; i<s.size() - 2; i++){

        string x = s.substr(i, 3);
        if(s[i] != s[i+1] && s[i+1] != s[i+2] && s[i+2] != s[i]){
            count++;
        }

    }

    cout<<count;

   return 0;
}