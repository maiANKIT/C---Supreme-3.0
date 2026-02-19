#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int arr[] = {1, 3, 5, 7, 9};
    int brr[] = {2, 4, 6, 8};
    int sizea = 5;
    int sizeb = 4;

    vector<int> ans;

    // push all element of a in ans
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }

    // push all element of b in ans
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }

    // printing ans
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}