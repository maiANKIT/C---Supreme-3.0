#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the size of array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "enter the vector: " << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    cout << "the repeated value is ";
    int found = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                cout << nums[i];
                found++;
                break;
            }
            else
            {
                continue;
            }
        }
        if (found == 1)
        {
            break;
        }
    }

    return 0;
}