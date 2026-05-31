#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"enter no. of items: ";
    cin>>n;

    int budget;
    cout<<"enter budget: ";
    cin>>budget;

    cout<<"enter values: ";
    vector<vector<int>> nums(n, vector<int>(2));

    for(int i = 0; i<n; i++){

        for(int j = 0; j<2; j++){
            cin>>nums[i][j];
        }

    }

    

   return 0;
}