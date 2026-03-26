#include <iostream>
#include <vector>
#include <algorithm>

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

    int target;
    cout<<"enter target: ";
    cin>>target;

    int i = 0;
    int j = nums.size() - 1;

    while(i<j){
        int sum = nums[i] + nums[j];
        if(sum == target){
            cout<<"yes"<<endl;
            break;
        }
        else if(sum < target){
            i++;
        }
        else{
            j--;
        }
    }


   return 0;
}