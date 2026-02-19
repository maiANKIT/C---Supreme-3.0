#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<double> digits(n);
    cout << "enter the elements: ";
    for (int i = 0; i < digits.size(); i++)
    {
        cin >> digits[i];
    }

    int sum = 0;

    for (int i = 0; i < digits.size(); i++)
    {
        sum = sum * 10 + digits[i];
    }

    // cout << "sum is: " << sum + 1 << endl;

    int x = sum + 1;

    int count = 0;
    int r = 0;
    int num2 = x;
    while (x != 0)
    {
        r = r * 10 + x % 10;
        x = x / 10;
        count++;
    }

    cout << count << endl;

    vector<int> arr(count);
    int count2 = count;

    int j = 0;

    cout << num2 << endl;
    while (num2 != 0)
    {
        arr[j] = num2 % 10;
        num2 = num2 / 10;
        j++;
    }

    vector<int> arr2(count2);
    int k = 0;
    while (k < count2)
    {
        arr2[k] = arr[count2 - k - 1];
        k++;
    }

    for (int i = 0; i < count2; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}