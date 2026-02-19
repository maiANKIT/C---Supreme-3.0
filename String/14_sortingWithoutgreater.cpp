#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(char first, char last)
{
    return first > last;
}

int main()
{

    string a;
    cout << "Enter the string here: ";
    getline(cin, a);

    cout << a << endl;

    sort(a.begin(), a.end(), cmp);
    cout << a;

    return 0;
}