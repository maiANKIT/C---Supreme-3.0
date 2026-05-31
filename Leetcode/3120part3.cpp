#include <bits/stdc++.h>

using namespace std;

int main()
{

    string word;
    cout<<"enter string: ";
    cin>>word;

    set<char> s1;
    set<char> s2;

    for(int i = 0; i<word.size(); i++){
        
        if(word[i] >= 'a' && word[i] <= 'z')
        s1.insert(word[i]);
        else s2.insert(word[i] + 32);

    }

    set<int> common;

    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(common, common.begin()));

    cout<<common.size();

    // int i = 0;
    // int j = 0;

    // int count = 0;

    // while(i<s1.size() && j<s2.size()){

    //     if(s1[i] - s2[j] == 32){
    //         count++;
    //         i++;
    //         j++;
    //     }
    //     else if(s1[i] - s2[j] < 32){
    //         i++;
    //     }
    //     else j++;

    // }

    // cout<<count;

   return 0;
}