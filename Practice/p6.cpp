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

    vector<int> num(n);
    cout << "enter the array: ";

    for (int i = 0; i < num.size(); i++)
    {
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    int i = 0;
    int j = 1;
    int count = 0;
    vector<int> arr;

    while (i <= num.size() - 1 && j <= num.size())
    {

        if (num[i] == num[j] && (i < num.size() - 1 && j < num.size()))
        {
            count++;
            i++;
            j++;
        }
        else
        {
            // arr.push_back(count);
            // count = 0;
            i++;
            j++;
        }

        if (num[i] != num[j] && i < num.size())
        {
            arr.push_back(count + 1);
            count = 0;
        }
    }

    cout << "size of arr: " << arr.size() << endl;

    cout << "valus of arr: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    i = 0;
    j = 1;

    while (i < num.size() - 1 && j < num.size())
    {

        if (num[i] == num[j])
        {

            num.erase(num.begin() + j);
        }
        else
        {
            i++;
            j++;
        }
    }

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;

    int m = INT_MIN;
    int index = -1;

    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] >= m)
        {
            m = arr[i];
            index = m;
        }
    }

    cout << "max element is: " << num[index] << endl;

    return 0;
}