#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> digits(n);
    cout << "enter the elements: ";
    for (int i = 0; i < digits.size(); i++)
    {
        cin >> digits[i];
    }

    if (digits[digits.size() - 1] < 9)
    {
        digits[digits.size() - 1] = digits[digits.size() - 1] + 1;
    }
    else
    {
        digits[digits.size() - 1] = 1;
        digits.push_back(0);
    }

    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i] << " ";
    }

    return 0;
}