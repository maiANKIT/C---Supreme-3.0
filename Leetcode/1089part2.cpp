#include <bits/stdc++.h>

using namespace std;

void print(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void change(vector<int> arr, int pos)
{

    int i = pos + 1;
    while (i < arr.size() - 1)
    {

        int x = arr[i];
        arr[i + 1] = arr[i];
        if (i == pos)
        {
            arr[pos + 1] = 0;
        }
        i++;
    }
}

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter values: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    cout << "original value: ";
    print(arr);

    cout << endl;

    vector<int> nums(arr.size());
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[j] == 0)
        {
            nums[i] = 0;
            nums[i + 1] = 0;
            i++;
        }
        else
        {

            nums[i] = arr[j];
        }
        j++;
    }

    print(nums);

    return 0;
}