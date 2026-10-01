#include <bits/stdc++.h>

using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // copy value
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else
        {
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    // copy logic for left array
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    // copy logic for right array
    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // todo left and right wala array to save space
}

void mergeSort(int *arr, int s, int e)
{

    // base case

    // s == e means single element
    // s > e invalid array
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    // left part sort krdo recursion
    mergeSort(arr, s, mid);

    // rightpart sort krdo recursion
    mergeSort(arr, mid + 1, e);

    // now merge 2 sorted arrays
    merge(arr, s, e);
}

int main()
{

    // int n;
    // cout << "enter size: ";
    // cin >> n;

    int nums[] = {7, 8, 9, 5, 6, 2, 1, 3};

    int n = 8;

    int s = 0, e = n - 1; // s == starting index and e = ending index
    mergeSort(nums, s, e);

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}