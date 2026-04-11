#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"enter size: ";
    for(int i = 0; i<nums.size(); i++){
        cin>>nums[i];
    }

    map<int, int> mp;
    for(int i = 0; i<nums.size(); i++){
        mp[nums[i]]++;
    }

    // cout<<mp.size()<<endl;

    for(auto i: mp){
        cout<<i.first<<" "<<i.second<<endl;
    }

   return 0;
}