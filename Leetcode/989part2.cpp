#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> num(n);
    cout << "enter the values: ";
    for (int i = 0; i < num.size(); i++)
    {
        cin >> num[i];
    }

    int k;
    cout << "enter k: ";
    cin >> k;

    vector<int> k1;
    while (k > 0)
    {

        k1.push_back(k % 10);
        k = k / 10;
    }

    cout << "k1: ";
    for (int i = 0; i < k1.size(); i++)
    {
        cout << k1[i] << " ";
    }

    for (int i = 0; i < k1.size(); i++)
    {

        num[num.size() - 1 - i] = num[num.size() - 1 - i] + k1[i];
    }

    cout << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    for (int i = 0; i < num.size() - 1; i++)
    {
        if (num[i] >= 10)
        {
            num[i] = num[i] - 10;
            num[i + 1] = num[i + 1] + 1;
        }
    }

    cout << endl;
    cout << "ans: ";
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}