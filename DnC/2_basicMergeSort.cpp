#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void merge(vector<int> &arr, int start, int end)
{

    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;

    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values in new arr
    int mainIndexArray = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndexArray++];
    }

    mainIndexArray = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndexArray++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;

    mainIndexArray = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndexArray++] = first[index1++];
        }
        else
        {
            arr[mainIndexArray++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainIndexArray++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainIndexArray++] = second[index2++];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{

    // base case
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    // left part sort krna h
    mergeSort(arr, start, mid);

    // right part sort krna h
    mergeSort(arr, mid + 1, end);

    // merge krte h
    merge(arr, start, end);
}

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = arr.size() - 1;

    mergeSort(arr, start, end);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}