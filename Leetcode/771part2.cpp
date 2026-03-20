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

    int count = 0;
    for (int i = 0; i < jewels.size(); i++)
    {
        for (int j = 0; j < stones.size(); j++)
        {
            if (jewels[i] == stones[j])
            {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}