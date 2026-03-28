#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDouble(int a)
{
    cout << 2 * a << " ";
}

bool checkEven(int a)
{
    return a % 2 == 0;
}

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for_each(arr.begin(), arr.end(), printDouble);
    cout << endl;

    int target;
    cout << "enter target: ";
    cin >> target;

    auto it = find(arr.begin(), arr.end(), target);
    cout << *it << endl;

    auto it2 = find_if(arr.begin(), arr.end(), checkEven);
    cout << "even: " << *it2 << endl;

    int target2;
    cout << "enter number to count: ";
    cin >> target2;

    int ans = count(arr.begin(), arr.end(), target2);
    cout << "count: " << ans << endl;

    int ans2 = count_if(arr.begin(), arr.end(), checkEven);
    cout << "even count: " << ans2 << endl;

    // rotate
    rotate(arr.begin(), arr.begin() + 3, arr.end());
    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    // unique
    // sare elements ko unique banata h

    auto it3 = unique(arr.begin(), arr.end());

    arr.erase(it3, arr.end());
    for (int a : arr)
    {
        cout << a << " ";
    }

    return 0;
}