#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cout<<"enter s: ";
    cin>>s;

    string t;
    cout<<"enter t: ";
    cin>>t;

    int i = 0;
    int j = 0;

    int a = 0;

    while(j<t.size()){

        if(s[i] == t[j]){
            a++;
            i++;
        }

        j++;

    }

    bool x = 0;

    if(a == s.size()) x = 1;
    
    cout<<x;

   return 0;
}