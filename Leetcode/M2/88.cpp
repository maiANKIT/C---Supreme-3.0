#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums1(n);

    int m;
    cout << "enter size: ";
    cin >> m;

    vector<int> nums2(m);

    cout << "enter nums1: ";
    for (int i = 0; i < nums1.size(); i++)
    {
        cin >> nums1[i];
    }

    cout << "enter nums2: ";
    for (int i = 0; i < nums2.size(); i++)
    {
        cin >> nums2[i];
    }

    // int i = 0;
    // int j = 0;

    for (int i = m; i < m + n; i++)
    {
        nums1[i] = nums2[i - m];
    }

    sort(nums1.begin(), nums1.end());

    return 0;
}