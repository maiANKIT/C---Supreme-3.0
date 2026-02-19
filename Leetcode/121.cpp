#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> prices(n);
    cout << "enter the values: ";
    for (int i = 0; i < prices.size(); i++)
    {
        cin >> prices[i];
    }

    vector<int> pl;

    int j = 0;
    for (int i = j; j < prices.size(); i++)
    {

        if (i < prices.size())
        {

            pl.push_back(prices[j] - prices[i]);
        }
        else if (i > prices.size())
        {
            j++;
            i = 0;
        }

        // if (j == prices.size() - 1)
        // {
        //     // i = 0;
        //     break;
        // }
    }

    cout << "values are: ";
    for (int i = 0; i < pl.size(); i++)
    {

        cout << pl[i] << " ";
    }

    return 0;
}