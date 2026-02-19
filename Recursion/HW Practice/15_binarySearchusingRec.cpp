#include <iostream>
#include <vector>

using namespace std;

void binarySearch(vector<int> &arr, int &size, int &key, int &s, int &e)
{

    // int s = 0;
    // int e = size - 1;
    int m = s + ((e - s) / 2);

    if (s > e)
    {
        cout << "not found" << endl;
        return;
    }

    if (arr[m] == key)
    {
        cout << "found" << endl;
        return;
    }
    if (arr[m] < key)
    {
        s = m + 1;
    }
    else if (arr[m] > key)
    {
        e = m - 1;
    }

    binarySearch(arr, size, key, s, e);
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

    int key;
    cout << "enter target: ";
    cin >> key;

    int size = arr.size();

    int s = 0;
    int e = size - 1;
    // int m = s + ((s + e) / 2);

    binarySearch(arr, size, key, s, e);

    return 0;
}