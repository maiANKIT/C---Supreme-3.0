#include <iostream>

using namespace std;

int main()
{

    int a[10];
    cout << "enter element " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    // linear search
    int n;
    cout << "enter the number you want to find: ";
    cin >> n;

    bool flag = 0;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "present";
    }
    else
    {
        cout << "absent";
    }

    return 0;
}