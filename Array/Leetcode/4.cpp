#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int m, n;
    cout << "enter the size of nums1: ";
    cin >> m;

    cout << "enter the size of nums2: ";
    cin >> n;

    vector<int> nums1(m);
    vector<int> nums2(n);

    cout << "enter the elements of nums1: ";
    for (int i = 0; i < m; i++)
    {
        cin >> nums1[i];
    }

    cout << "enter the elements of nums2: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums2[i];
    }

    vector<float> nums3(m + n);

    for (int i = 0; i < m + n; i++)
    {
        if (i < m)
        {
            nums3[i] = nums1[i];
        }
        else
        {
            nums3[i] = nums2[i - m];
        }
    }

    cout << "you have entered: ";
    for (int i = 0; i < m + n; i++)
    {
        cout << nums3[i] << " ";
    }

    cout << endl;

    float ans = 0;

    if ((m + n) % 2 == 0)
    {
        ans = (nums3[(m + n) / 2] + nums3[(m + n) / 2 - 1]) / 2;
    }
    else
    {
        ans = nums3[(m + n) / 2];
    }

    cout << ans;

    return 0;
}