#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"enter size: ";
    cin>>n;

    vector<int>nums(n);
    cout<<"enter values: ";

    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    vector<int> arr = nums;
    sort(arr.begin(), arr.end());
    
    int k = 0;
    for(int i = 0; i<nums.size(); i++){

        if(nums[i] != i){
            k = i + 1;
            break;
        }

    }

    if(k == 0) k = nums.size();

    vector<int> result;

    int a = 0;

    for(int i = 0; i<nums.size(); i = i + k){

        vector<int> w;
        for(int i = 0; i<k; i++){
            w.push_back(nums[a + i]);
        }

        sort(w.begin(), w.end());

        for(int i = 0; i<k; i++){

            if(w[i] != i){
                result.push_back(i + 1);
            }

        }

    }

   return 0;
}