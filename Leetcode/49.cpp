#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"enter values: ";
    cin>>n;

    vector<string> strs(n);
    cout<<"enter values: ";
    for(int i = 0; i<strs.size(); i++){

        cin>>strs[i];

    }

    for(int i = 0; i<strs.size(); i++){

        sort(strs[i].begin(), strs[i].end());

    }

    

   return 0;
}