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
    int j = 1;
    int sum = 0;
    vector<int> ans;

    while (i < numbers.size())
    {

        if (j >= numbers.size())
        {
            i++;
            j = i + 1;
        }
        if (numbers[i] + numbers[j] == target)
        {
            ans.push_back(i + 1);
            ans.push_back(j + 1);
            break;
        }
        else if (numbers[i] + numbers[j] < target && i < numbers.size())
        {
            j++;
        }
        else if (numbers[i] + numbers[j] > target)
        {
            cout << "this is 3rd" << endl;
            i++;
            j = i + 1;
        }
    }

    cout << "ans: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}