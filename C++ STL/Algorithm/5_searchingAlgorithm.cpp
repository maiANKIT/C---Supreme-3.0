#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    bool x = binary_search(arr.begin(), arr.end(), 50);
    cout << x; // target

    // it return boolean

    return 0;
}