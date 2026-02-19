#include <iostream>

using namespace std;

int main()
{

    string str;
    cout << "Enter the string ";
    cin >> str;

    string part;
    cout << "Enter the part you want to remove ";
    cin >> part;

    int pos = str.find(part);

    while (pos != string::npos)
    {
        str.erase(pos, part.length());
        pos = str.find(part);
    }

    cout << "Final value is " << str;

    return 0;
}