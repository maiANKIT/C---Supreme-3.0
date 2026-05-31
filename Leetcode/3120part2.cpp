#include <bits/stdc++.h>

using namespace std;

int main()
{

    string word;
    cout<<"enter string: ";
    cin>>word;

    // unordered_map<char,int> mp;

    // for(int i = 0; i<word.size(); i++){
    //     mp[word[i]]++;
    // }

    string s1;
    string s2;

    for(int i = 0; i<word.size(); i++){
        
        if(word[i] >= 'a' && word[i] <= 'z')
        s1 = s1 + word[i];
        else s2 = s2 + word[i];

    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int i = 0;
    int j = 0;

    int count = 0;

    while(i<s1.size() && j<s2.size()){

        if(s1[i] - s2[j] == 32){
            count++;
            i++;
            j++;
        }
        else if(s1[i] - s2[j] < 32){
            i++;
        }
        else j++;

    }

    cout<<count;

   return 0;
}