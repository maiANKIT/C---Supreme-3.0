#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"enter values: ";
    for(int i = 0; i<nums.size(); i++){
        cin>>nums[i];
    }

    int x = 1;
    int y = 0;

    int a = 0, b = 0;

    map<int, int> mp;
    for(int i = 0; i<nums.size(); i++){

        mp[nums[i]]++;

    }

    for(auto i: mp){

        if(i.second == 2){
            a = i.first;
        }

        if(y == 0 && i.first != x){
            b = x;
            y = 1;
        }

        x++;

    }

    if(b == 0) b = nums.size();

    

    cout<<a<<" "<<b;

    return 0;
}