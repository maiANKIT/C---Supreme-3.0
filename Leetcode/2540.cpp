#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size of arr1: ";
    cin >> n;

    int m;
    cout << "enter the size of arr2: ";
    cin >> m;

    vector<int> nums1(n);
    vector<int> nums2(m);

    cout << "enter the arr1: ";
    for (int i = 0; i < nums1.size(); i++)
    {
        cin >> nums1[i];
    }

    cout << "enter the arr2: ";
    for (int i = 0; i < nums2.size(); i++)
    {
        cin >> nums2[i];
    }

    int i = 0;
    int j = 0;
    int x = -1;
    while (i < nums1.size() && j < nums2.size())
    {

        if (nums1[i] == nums2[j])
        {
            x = nums1[i];
            break;
        }
        else if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
    }

    cout << "final ans: " << x;

    return 0;
}