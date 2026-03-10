#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> nums1(n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cin >> nums1[i];
    }

    int m;
    cout << "enter size: ";
    cin >> m;

    cout << "enter values: ";
    vector<int> nums2(m);
    for (int i = 0; i < nums2.size(); i++)
    {
        cin >> nums2[i];
    }

    return 0;
}