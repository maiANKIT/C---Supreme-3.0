#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the n: ";
    cin >> n;

    vector<int> nums(n);

    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "enter the target value: ";
    cin >> target;

    // int i = 0;
    // int j = 1;
    int x = -1;
    // while (i < nums.size())
    // {
    //     if (target == nums[i])
    //     {
    //         x = i;
    //         i++;
    //     }
    //     else if(target != nums[i]){

    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }

    for (int i = 0; i < nums.size(); i++)
    {
        if (target == nums[i])
        {
            x = i;
            break;
        }
    }
    if (x !=)
    {
        x = -1;
    }
    cout << x;

    return 0;
}