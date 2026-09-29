//this is having bug have to fix it
#include <bits/stdc++.h>

using namespace std;

bool checkSorted(vector<int> nums, int s, int e, int key)
{

    if(s > e) return -1;

    int mid = s + (e - s)/2;

    if(nums[mid] == key){
        return mid;
    }

    //if arr[i] < key -> right me search
    if(nums[mid] < key){
        return checkSorted(nums, mid + 1, e, key);
    }
    else{
        return checkSorted(nums, s, mid - 1, key);
    }
    
}

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for(int &x: nums) cin>>x;

    bool x = checkSorted(nums, 0, nums.size() - 1, 99);

    cout << x;

    return 0;
}