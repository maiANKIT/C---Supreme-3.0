#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout<<"enter size: ";
    cin>>n;

    vector<int> nums;
    cout<<"enter values: ";
    for(int i= 0; i<nums.size(); i++){
        cin>>nums[i];
    }

    sort(nums)

   return 0;
}