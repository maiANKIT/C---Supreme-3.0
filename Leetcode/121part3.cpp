#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

    int j = prices.size() - 1;

    int i = j;
    while (j >= 0)
    {

        if (i >= 0)
        {

            pl.push_back(prices[j] - prices[i]);
            i--;
        }
        else
        {
            j--;
            i = j;
        }
    }

    cout << "values are: ";
    for (int i = 0; i < pl.size(); i++)
    {

        cout << pl[i] << " ";
    }

    cout << endl;

    auto it = max_element(pl.begin(), pl.end());
    cout << "Maximum element: " << *it << std::endl;

    // cout << x;

    return 0;
}