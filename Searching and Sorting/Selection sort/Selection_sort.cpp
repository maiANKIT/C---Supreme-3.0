#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the amount of number ";
    cin >> n;

    vector<int> name(n);

    cout << "enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }

    cout << "entered values are ";
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << " ";
    }

    cout << endl
         << "insertion Sorted" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (name[i] > name[j])
            {
                swap(name[i], name[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << name[i] << " ";
    }

    return 0;
}