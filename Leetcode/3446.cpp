#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"enter size: ";
    cin>>n;

    vector<vector<int>> nums(n, vector<int>(n));
    cout<<"enter values: ";
    for(int i = 0; i<nums.size(); i++){
        for(int j = 0; j<nums[0].size(); j++){

            cin>>nums[i][j];

        }
    }

    

   return 0;
}