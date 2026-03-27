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

    int y = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1])
        {
            nums.erase(nums.begin() + i);
            nums.erase(nums.begin() + i);
            i=i-2;
        }
    }

    vector<int> x;
    int k = 1;
    int i = 0;

    // for(int i = 0; i<nums.size(); i++){
    //     if(nums[i] == i + 1){
    //         continue;
    //     }
    //     else if()
    // }

    cout << "x size: " << nums.size() << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}