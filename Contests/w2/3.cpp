#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n);
    cout << "Enter values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "enter target: ";
    cin >> target;

    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] ^ nums[j] == target)
            {
                cout<<"c-1"<<endl;
                break;
            }

            if (j == nums.size() - 1 && nums[i] ^ nums[j] != target)
            {
                nums.erase(nums.begin());
                i--;
                count++;
                cout<<"c-2"<<endl;
            }
        }
    }

    if(count == 0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<count;
    }

    // cout << count;

    return 0;
}