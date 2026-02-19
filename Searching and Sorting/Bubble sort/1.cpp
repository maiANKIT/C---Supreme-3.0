#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;
    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cout << "bubble sorted vector" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                swap(num[j], num[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}