#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    vector<int> countnums;
    vector<int> nums2;

    int count = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1])
        {
            count++;
        }
        else
        {
            countnums.push_back(count);
            nums2.push_back(nums[i]);
            count = 1;
        }
    }

    cout << "count: ";
    for (int i = 0; i < countnums.size(); i++)
    {
        cout << countnums[i] << " ";
    }
    cout << endl;

    cout << "nums2: ";
    for (int i = 0; i < nums2.size(); i++)
    {
        cout << nums2[i] << " ";
    }

    // int k = 0;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (countnums[k] > 2 && countnums[k] % 2 == 0)
    //     {
    //         nums.erase(nums.begin() + i);
    //         // k++;
    //     }
    //     else if (countnums[k] > 2 && countnums[k] % 2 != 0)
    //     {
    //         nums.erase(nums.begin() + i);
    //         i--;
    //         // k++;
    //     }
    //     else if (countnums[k] <= 2)
    //     {
    //         // k--;
    //     }
    //     k++;
    // }
    cout << endl;

    int k = 0;
    
    for(int i = 0; i<nums.size(); ){
        int x = 0;
        if(countnums[k] <= 2){
            x = i + countnums[k];
            nums.erase(nums.begin() + i, nums.begin() + x);
            k++;
        }
        else if(countnums[k]>2 && countnums[k] % 2 == 0){
            i = i + countnums[k] / 2;
            k++;
        }
        else if(countnums[k] > 2 && countnums[k] % 2 != 0){
            i = i + countnums[k]/2 + 1;
            k++;
        }
    }

    cout << "nums: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}