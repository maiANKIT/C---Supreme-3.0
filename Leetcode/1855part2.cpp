#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums1(n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cin >> nums1[i];
    }

    int m;
    cout << "enter size: ";
    cin >> m;

    vector<int> nums2(m);
    for (int i = 0; i < nums2.size(); i++)
    {
        cin >> nums2[i];
    }

    int i = 0;
    int j = 0;
    int maxi = INT_MIN;

    while (i <= j)
    {

        if (nums1[i] <= nums2[j])
        {
            cout<<"case-1"<<endl;
            maxi = max(maxi, j - i);
            // break;
        }
        if(nums1[i] > nums2[j]){
            cout<<"case-2"<<endl;
            i++;
            j++;
        }
        else
        {
            cout<<"case-3"<<endl;
            i++;
        }

    }

    cout << "maxi: " << maxi << endl;

    return 0;
}