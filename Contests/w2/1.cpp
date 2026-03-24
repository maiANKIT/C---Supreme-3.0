#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> nums1(n);
    cout << "enter values: ";
    for (int i = 0; i < nums1.size(); i++)
    {
        cin >> nums1[i];
    }

    sort(nums1.begin(), nums1.end());

    int countE = 0;
    int countO = 0;

    vector<int> nums2;

    for (int i = 0; i < nums1.size(); i++)
    {
        if (nums1[i] % 2 == 0)
            countE++;
        else
            countO++;
    }

    bool x = 1;
    if (countO == nums1.size() || countE == nums1.size())
    {
        x = 1;
    }
    else
    {
        int j = 0;
        for (int i = 0; i < nums1.size() && j < nums1.size();)
        {
            if (nums1[i] % 2 == 0 && nums1[j] % 2 != 0 && nums1[i] - nums1[j] >= 1 && i != j)
            {
                cout << "c1" << endl;
                nums2.push_back(nums1[i] - nums1[j]);
                i++;
            }
            else if (nums1[i] % 2 == 0 && nums1[j] % 2 != 0 && nums1[i] - nums1[j] < 1 && i != j)
            {
                cout << "c2" << endl;
                j++;
            }
            else if (nums1[i] % 2 != 0)
            {
                cout << "c3" << endl;
                nums2.push_back(nums1[i]);
                i++;
            }
            else
            {
                cout << "c4" << endl;
                i++;
            }
        }

        if (nums2.size() != nums1.size())
        {
            x = 0;
        }
        else
        {
            int countO2 = 0;
            for (int i = 0; i < nums2.size(); i++)
            {
                if (nums2[i] % 2 == 0)
                {
                    x = 0;
                    break;
                }
            }
        }
    }

    cout << x;

    return 0;
}