#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "enter the values: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cin >> numbers[i];
    }

    int target;
    cout << "enter the target: ";
    cin >> target;

    int i = 0;
    int j = numbers.size() - 1;

    vector<int> ans;

    while (i < j)
    {

        int sum = numbers[i] + numbers[j];

        if (sum == target)
        {
            ans.push_back(i + 1);
            ans.push_back(j + 1);
            break;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    cout << "ans: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}