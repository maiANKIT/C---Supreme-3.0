#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter values: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int index = -1;

    for (int i = 1; i < arr.size() - 1; i++)
    {

        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
        {
            index = i;
            break;
        }
    }

    cout << index;

    return 0;
}