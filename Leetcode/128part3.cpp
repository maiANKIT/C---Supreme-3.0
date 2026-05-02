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

    map<int, int> mp;
    for(int i = 0; i<nums.size(); i++){

        mp[nums[i]]++;

    }

    int mini = INT_MAX;

    for(int i = 0; i<nums.size(); i++){

        mini = min(mini, nums[i]);

    }

    int count = 1;

    int maxi = INT_MIN;

    int x = mini;

    for(auto i: mp){

        if(i.first - mini == 1){

            count++;
            mini = i.first;

        }
        else if(i.first - mini == 0){
            continue;
        }
        else{
            count = 1;
        }

        maxi = max(maxi, count);

    }

    cout<<maxi;



   return 0;
}