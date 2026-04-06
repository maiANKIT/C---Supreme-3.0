#include <bits/stdc++.h>

using namespace std;

int main()
{

    string moves;
    cout<<"enter moves: ";
    cin>>moves;

    int l = 0;
    int u = 0;
    for(int i = 0; i<moves.size(); i++){
        if(moves[i] == 'L') l++;
        else if(moves[i] == 'R') l--;
        else if(moves[i] == 'U') u++;
        else if(moves[i] == 'D') u--;
    }

    bool x = 0;

    if(l == 0 && u == 0){
        x = 1;
    }
    

   return 0;
}