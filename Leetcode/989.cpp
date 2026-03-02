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

    long long multi = 0;

    for (int i = 0; i < num.size(); i++)
    {

        multi = multi * 10 + num[i];
    }

    cout << "check: " << multi << endl;

    int k;
    cout << "enter the k: ";
    cin >> k;

    long long sum = k + multi;
    cout << "sum: " << sum << endl;

    int i = 0;

    vector<int> final;

    while (sum > 0)
    {

        final.insert(final.begin(), sum % 10);
        sum = sum / 10;
    }

    cout << "final: ";
    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}