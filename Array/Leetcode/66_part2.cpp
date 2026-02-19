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

    vector<double> nums(n);
    cout << "enter the elements: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    double sum = 0;

    int i = 0;
    double power = nums.size();
    while (i <= nums.size())
    {
        sum = sum + pow(10, power - 1) * nums[i];
        power--;
        i++;
    }

    cout << sum + 1 << endl;

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

    int arr[count];

    int count2 = count;

    int j = 0;
    int num3 = count2;
    cout << num2 << endl;

    int pow1 = 0;
    while (num2 != 0)
    {
        pow1 = (pow(10, count2 - 1));
        arr[j] = x / pow1;
        x = x % pow1;
        count2--;
        j++;
    }

    for (int i = 0; i < num3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}