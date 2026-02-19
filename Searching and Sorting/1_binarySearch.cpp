#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int size, int target)
{

    int start = 0;
    int end = size - 1;
    int mid = (end - start) / 2;
    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }

        if (element < mid)
        {
            end = mid - 1;
        }

        if (element > mid)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int arr[] = {2, 4, 6, 8, 10, 12, 16};

    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 6;

    int indexOfTarget = binarySearch(arr, size, target);

    if (indexOfTarget == -1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target found at " << indexOfTarget << " index" << endl;
    }

    return 0;
}