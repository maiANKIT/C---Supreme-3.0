#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(vector<int> nums){

    

}

int main()
{

    int n;
    cout<<"enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"enter values: ";
    for(int i = 0; i<nums.size(); i++) cin>>nums[i];

    vector<vector<int>> ans = subsets(nums);

   return 0;
}