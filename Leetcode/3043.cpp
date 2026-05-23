#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n1;
    cout<<"n1 size: ";
    cin>>n1;

    int n2;
    cout<<"n2 size: ";
    cin>>n2;

    vector<int> arr1(n1);
    cout<<"enter arr1 values: ";
    for(int i = 0; i<n1; i++){

        cin>>arr1[i];

    }

    vector<int> arr2(n2);
    cout<<"enter arr1 values: ";
    for(int i = 0; i<n2; i++){

        cin>>arr2[i];

    }

    int max = 0;
    int t = 0;
    for(int i = 0; i<arr1.size(); i++){

        string a = to_string(arr2[t]);
        string b = to_string(arr1[i]);
        for(int j = 0; )

    }

   return 0;
}