#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

    int k;
    cin>>k;

    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i = 0; i<nums.size(); i++){
        mini = min(mini, nums[i]);
        maxi = max(maxi, nums[i]);
    }

    long long sum = 0;

    for(int i = 0; i<k; i++){
        sum = sum + maxi - mini;
    }

    cout<<sum<<endl;

   return 0;
}