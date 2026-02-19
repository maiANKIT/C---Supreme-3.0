#include <iostream>
#include <string>

using namespace std;

int main()
{

    string x;
    cout << "Enter the string: ";
    cin >> x;

    string part;
    cout << "Enter the part you want to remove ";
    cin >> part;

    int pos = x.find(part);
    while (pos != string::npos)
    {
        x.erase(pos, part.length());
        pos = x.find(part);
    }
    cout << x;

    return 0;
}