#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int m;
    cout << "enter the m size: ";
    cin >> m;

    int n;
    cout << "enter the n size: ";
    cin >> n;

    int m1;
    cout << "enter the m size: ";
    cin >> m1;

    int n1;
    cout << "enter the n size: ";
    cin >> n1;

    vector<int> nums1(m1);
    vector<int> nums2(n1);

    for (int i = 0; i < m1; i++)
    {
        cin >> nums1[i];
    }

    for (int i = 0; i < n1; i++)
    {
        cin >> nums2[i];
    }

    vector<int> n2;
    for (int i = 0; i < m + n; i++)
    {

        if (i < m)
        {
            n2.push_back(nums1[i]);
        }
        else
        {
            n2.push_back(nums2[i - m]);
        }
    }

    sort(n2.begin(), n2.end());

    for (int i = 0; i < n2.size(); i++)
    {
        cout << n2[i] << " ";
    }

    return 0;
}