#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 50;
    arr[2] = 30;
    arr[3] = 60;
    arr[4] = 100;

    auto it = upper_bound(arr.begin(), arr.end(), 35);
    cout << *it << endl;                         //target

    //upper_bound will return next element greater than target if not present it will return garbage value

    //next element me jo usse bada h

    return 0;
}