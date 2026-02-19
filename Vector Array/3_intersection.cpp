#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 3, 4, 6, 8};
    int asize = 6;
    int brr[] = {3, 3, 4, 9, 10};
    int bsize = 4;

    vector<int> ans;

    for (int i = 0; i < bsize; i++)
    {
        for (int j = 0; j < asize; j++)
        {
            if (brr[i] == arr[j])
            {
                arr[j] = -1;
                ans.push_back(brr[i]);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}