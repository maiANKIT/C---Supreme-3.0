#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            // search in left
            end = mid + 1;
        }
        else
        {
            // search in right
            start = mid + 1;
        }

        mid = (start + mid) / 2;
    }

    // element not found
    return -1;
}

int main()
{

    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int n = 7;
    int target;

    cout << "Enter the target value: ";
    cin >> target;

    int indexOfTarget = binarySearch(arr, n, target);

    if (indexOfTarget == -1)
    {
        cout << "target do not found" << endl;
    }
    else
    {
        cout << "target found at " << indexOfTarget << endl;
    }

    return 0;
}