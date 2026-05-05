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

    int sum = 0;

    for(int i = 0; i<nums.size(); i++){

        int count = 0;
        int sum2 = 0;

        for(int j = 1; j<=nums[i]; j++){

            if(nums[i] % j == 0){
                count++;
                sum2 = sum2 + j;
            }

        }

        if(count == 4) sum = sum + sum2;

    }

    cout<<sum;

   return 0;
}