#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter the value: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int index = -1;
    int max = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }

    cout << index;

    return 0;
}