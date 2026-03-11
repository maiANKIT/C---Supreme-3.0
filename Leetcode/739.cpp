#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> tempratures(n);

    cout << "enter values: ";
    for (int i = 0; i < tempratures.size(); i++)
    {
        cin >> tempratures[i];
    }

    int count = 1;

    int i = 0;
    int j = 1;

    vector<int> ans;

    for (int i = 0; i < tempratures.size(); i++)
    {
        for (int j = i + 1; j <= tempratures.size(); j++)
        {
            if (tempratures[i] > tempratures[j])
            {
                count++;
            }
            else if (j < tempratures.size() && tempratures[i] < tempratures[j])
            {
                ans.push_back(count);
                count = 1;
                cout << "case-2 " << i << endl;
                break;
            }
            else if (j >= tempratures.size())
            {
                ans.push_back(0);
                cout << "case-3 " << i << endl;
                break;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}