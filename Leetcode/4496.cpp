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

    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = i + 1; j < nums2.size(); j++)
        {
            if (nums2[j] > nums1[i])
            {
                nums1[i] = nums2[j];
                break;
            }

            if (j == nums2.size() - 1 && nums2[j] < nums1[i])
            {
                nums1[i] = -1;
            }
        }
    }

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}