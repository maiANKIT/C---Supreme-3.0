#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"enter size: ";
    cin>>n;

    vector<int> nums(n);
    cout<<"enter values: ";
    for(int &i: nums) cin>>i;

    for(int i = 0; i<nums.size(); i++){

        bool swapped = false;
        for(int j = 0; j<nums.size() - i -  1; j++){

            if(nums[j] > nums[j + 1]){ 
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }

        }

        if(swapped == false) break;

    }

    for(int i: nums) cout<<i<<" ";

   return 0;
}