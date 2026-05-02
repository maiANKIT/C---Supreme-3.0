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

    sort(nums.begin(), nums.end());

    int maxi = 1;
    int count = 1;

    for(int i = 1; i<nums.size(); i++){

        if(nums[i] - nums[i - 1] == 1){
            count++;
        }
        else if(nums[i] - nums[i - 1] == 0) continue;
        else{
            count = 1;
        }

        maxi = max(maxi, count);

    }

    cout<<maxi;



   return 0;
}