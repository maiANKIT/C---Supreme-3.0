#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "enter values: ";
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
    }

    cout<<"sum: "<<sum<<endl;

    int sum2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] > 9)
        {
            while (nums[i] > 0)
            {
                sum2 = sum2 + nums[i] % 10;
                nums[i] = nums[i] / 10;
            }
        }
        else
            sum2 = sum2 + nums[i];
    }

    cout <<"ans: " <<abs(sum2 - sum);

    return 0;
}