#include <bits/stdc++.h>

using namespace std;

void printPermutation(string &str, int i){

    //base case
    if(i >= str.size()){
        cout<<str<<" ";
        return;
    }

    //swapping
    for(int j = i; j < str.size(); j++){

        //swap
        swap(str[i], str[j]);

        //rec call
        printPermutation(str, i+1);

        //backtracking to recreate the original input string
        swap(str[i], str[j]);
        
    }

}

int main()
{

    string s;
    cin>>s;

    int i = 0;
    printPermutation(str, i);

   return 0;
}