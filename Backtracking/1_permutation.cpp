#include <bits/stdc++.h>

using namespace std;

//copy nhi send ki h by reference h original string 
void printPermutation(string &s, int i){

    if(i >= s.size()){
        cout<<s<<" ";
        return;
    }

    //swap
    for(int j = i; j<s.size(); j++){

        //swap
        swap(s[i], s[j]);

        //rec call
        printPermutation(s, i + 1);

        //backtracking
        swap(s[i], s[j]);

    }

}

int main()
{

    string s;
    cin>>s;

    printPermutation(s, 0);

   return 0;
}