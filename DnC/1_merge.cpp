#include <iostream>

using namespace std;

int merge(int *arr, int s, int e)
{

    int m = s + (e - s) / 2;
}

void mergeSort(int *arr, int s, int e)
{

    // base case
    // s == e single element
    // s>e invalid array
    if (s >= e)
    {
        return;
    }

    int m = s + (e - s) / 2;
    // left part sort krdo recurrsion
    mergeSort(arr, s, m);

    // right part sort do recurrsion
    mergeSort(arr, m + 1, e);

    // ab merge krne k liye new function banayenge
    merge(arr, s, e);
}

int main()
{

    int arr[] = {4, 5, 13, 2, 12};
    int n = 5;

    int s = 0;
    int e = n - 1;

    mergeSort(arr, s, e);

    return 0;
}