#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int orderSize;
    cout << "enter order size: ";
    cin >> orderSize;

    vector<int> order(orderSize);
    cout << "enter order: ";
    for (int i = 0; i < order.size(); i++)
    {
        cin >> order[i];
    }

    int friendsSize;
    cout << "enter friends size: ";
    cin >> friendsSize;

    vector<int> friends(friendsSize);
    cout << "enter friends: ";
    for (int i = 0; i < friends.size(); i++)
    {
        cin >> friends[i];
    }

    vector<int> ans;

    for (int i = 0; i < order.size(); i++)
    {
        for (int j = 0; j < friends.size(); j++)
        {
            if (order[i] == friends[j])
            {
                ans.push_back(order[i]);
            }
        }

        if (ans.size() == friends.size())
            break;
    }

    cout << "ans: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}