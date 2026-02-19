#include <iostream>
#include <string>

using namespace std;

int main()
{

    string a;
    cout << "enter the string: ";
    cin >> a;

    for (int i = 0, j = a.size() - 1; i < j;)
    {
        if ((a[i] >= 65 && a[j] <= 90) || (a[i] >= 97 && a[j] <= 122))
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
        else if (a[i] < 65 || (a[i] > 90 && a[i] < 97) || a[i] > 122)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    cout << a;

    return 0;
}