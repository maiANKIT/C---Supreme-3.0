#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string a;
    cout << "Enter the string here: ";
    getline(cin, a);

    cout << a << endl;

    sort(a.begin(), a.end(), greater<int>());
    cout << a;

    return 0;
}