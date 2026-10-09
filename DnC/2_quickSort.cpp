#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int s, int e)
{

    // step 1: pivot element ko select krna h
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step 2: find right position for pivot element and place it there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
            count++;
    }

    // jab main loop se bahar hua, toh mere paas pivot ki right position ka index ready h
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // step 3: left me chhote and right me bade
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivotElement)
            i++;

        while (arr[j] > pivotElement)
            j--;

        // 2 case ho skte h
        // A-> you found element to swap
        // B-> no need to swap

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[pivotIndex], arr[rightIndex]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
        return;

    // partition logic returns pivot index
    int p = partition(arr, s, e);

    // recursive calls
    // pivot element -> left
    quickSort(arr, s, p - 1);

    // pivot element -> right
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[] = {8, 1, 3, 4, 20, 50, 30};
    int n = 7;

    int s = 0, e = n - 1;

    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}