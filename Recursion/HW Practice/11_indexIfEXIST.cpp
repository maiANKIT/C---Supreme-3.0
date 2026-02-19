#include <iostream>
#include <string>

using namespace std;

int findindex(string s, int key, int i, int n)
{

    // base case
    int index1 = -1;
    if (i >= n)
    {
        return index1;
    }

    if (s[i] == key)
    {
        return i;
    }

    i++;

    return findindex(s, key, i, n);

    // return index1;
}

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    char key;
    cout << "enter the element to find: ";
    cin >> key;

    int i = 0;
    int n = s.size();

    int index = findindex(s, key, i, n);

    cout << index;

    return 0;
}