#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter the values: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int product = 1;
    vector<int> answer;
    int j = 0;

    int i = 0;

    while (j < nums.size())
    {

        if (i == j)
        {
            i++;
            continue;
        }
        else if (i >= nums.size())
        {
            i = 0;
            j++;
            answer.push_back(product);
            product = 1;
        }
        else
        {
            product = product * nums[i];
            i++;
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {

        cout << answer[i] << " ";
    }

    return 0;
}