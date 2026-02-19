#include <iostream>
#include <string>

using namespace std;

void indexes(string s, char key, int i, int size)
{

    // base case
    if (i >= size)
    {
        return;
    }

    if (s[i] == key)
    {
        cout << "found at: " << i << endl;
    }

    i++;
    indexes(s, key, i, size);
}

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    char key;
    cout << "enter the key: ";
    cin >> key;

    int i = 0;
    int size = s.size();

    indexes(s, key, i, size);

    return 0;
}