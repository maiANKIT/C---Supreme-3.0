#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    
    int i = 0;
    int x = 1;
    while(i<nums.size()){

        if(nums[i] != nums[x]){
            x++;
            i++;
            continue;
        }
        else if(nums[i] == nums[x]){
            i++;
            nums[x] = nums[i];
        }

    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}