#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n1, n2;
    cout << "enter n1 & n2: ";
    cin >> n1 >> n2;

    vector<int> nums1(n1), nums2(n2);

    cout << "enter nums1 values: ";
    for (int i = 0; i < nums1.size(); i++)
    {
        cin >> nums1[i];
    }

    cout << "enter nums2 values: ";
    for (int i = 0; i < nums2.size(); i++)
    {
        cin >> nums2[i];
    }

    set<int> s1;
    s1.insert(nums1.begin(), nums1.end());

    set<int> s2;
    s2.insert(nums2.begin(), nums2.end());

    nums1.assign(s1.begin(), s1.end());
    nums2.assign(s2.begin(), s2.end());

    vector<int> x;

    int i = 0;
    int j = 0;
    while (i < nums1.size() && j < nums2.size())
    {

        if (nums1[i] == nums2[j])
        {

            x.push_back(nums1[i]);
            i++;
            j++;

        }
        else if(nums1[i] > nums2[j]){
            j++;
        }
        else if(nums1[i] < nums2[j]){
            i++;
        }
    }

    for(int i = 0; i<x.size(); i++){
        cout<<x[i]<<" ";
    }

    return 0;
}