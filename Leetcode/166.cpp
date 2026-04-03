#include <bits/stdc++.h>

using namespace std;

int main()
{

    int numerator;
    cout << "numerator: ";
    cin >> numerator;

    int denominator;
    cout << "denominator: ";
    cin >> denominator;

    string x = to_string((double)numerator / denominator);
    cout << x;

    return 0;
}