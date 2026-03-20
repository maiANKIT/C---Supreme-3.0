#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    string jewels;
    cout << "enter jewels: ";
    cin >> jewels;

    string stones;
    cout << "enter stones: ";
    cin >> stones;

    // sort(jewels.begin(), jewels.end());
    // sort(stones.begin(), jewels.end());

    int count = 0;

    int j = 0;
    int i = 0;

    while (i < stones.size() && j < jewels.size())
    {
        if (stones[i] == jewels[j])
        {
            count++;
            i++;
            cout << "c-1" << endl;
        }
        else
        {
            cout << "c-2" << endl;
            j++;
        }
    }

    cout << count;

    return 0;
}