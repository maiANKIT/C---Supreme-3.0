#include <iostream>

using namespace std;

int binarySearching(int arr[], int target, int n)
{

    int start = 0;
    int end = n - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {

        if (target == arr[mid])
        {
            return mid;
        }

        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int n = 16;
    int target;
    cout << "Enter the targeted number: ";
    cin >> target;

    int index = binarySearching(arr, target, n);

    if (index == -1)
    {
        cout << "Not such value present";
    }
    else
    {
        cout << "Value present at " << index << endl;
    }

    return 0;
}