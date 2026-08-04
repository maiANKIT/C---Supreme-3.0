#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> people(n);
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> people[i];
    }

    int limit;
    cout << "enter limit: ";
    cin >> limit;

    sort(people.begin(), people.end());

    int i = 0;
    int j = people.size() - 1;

    int count = 0;

    while (i<=j)
    {

        int sum = 0;
        int x = 0;
        while (sum < limit)
        {

            if (sum + people[j] <= limit)
            {
                sum = sum + people[j];
                j--;
            }
            else if (sum + people[i] <= limit)
            {
                sum = sum + people[i];
                i++;
            }
            x++;
            if(x > 2) break;
        }
        count++;
    }

    cout << count;

    return 0;
}