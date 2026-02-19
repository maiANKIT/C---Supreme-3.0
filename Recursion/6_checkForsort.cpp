#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool checkSort(vector<int> &arr, int &n1, int i)
{

    // base case

    if (i == n1 - 1)
    {
        return true;
    }

    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    return checkSort(arr, n1, i + 1);
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

    int i = 0;
    int n1 = arr.size();
    // bool x = 1;

    bool value = checkSort(arr, n1, i);

    cout << value;

    return 0;
}