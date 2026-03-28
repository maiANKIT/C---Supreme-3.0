#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter n: ";
    cin >> n;

    int m;
    cout << "enter m: ";
    cin >> m;

    vector<int> nums1(n);
    cout << "enter nums1 values: ";
    for (int i = 0; i < nums1.size(); i++)
    {
        cin >> nums1[i];
    }

    vector<int> nums2(m);
    cout << "enter nums2 values: ";
    for (int i = 0; i < nums2.size(); i++)
    {
        cin >> nums2[i];
    }

    int x = -1;

    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] == nums2[j])
            {
                x = j;
                if(j == nums2.size() - 1){
                    nums1[i] = -1;
                }
            }
            else if (x != -1 && nums2[j] > nums1[i])
            {
                nums1[i] = nums2[j];
                x = -1;
                break;
            }

            else if (x != -1 && j == nums2.size() - 1 && nums2[j] <= nums1[i])
            {
                nums1[i] = -1;
                x = -1;
            }
        }
    }

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}