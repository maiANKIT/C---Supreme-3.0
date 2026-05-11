#include <bits/stdc++.h>

using namespace std;

int main()
{

    int num;
    cout << "enter num: ";
    cin >> num;

    int count = 0;

    for (int i = 1; i <= num; i++)
    {

        int sum = 0;
        int nums = i;

        while (nums > 0)
        {

            sum = sum + nums % 10;
            nums = nums / 10;

        }

        cout<<"sum: "<<sum<<endl;

        if (sum % 2 == 0)
            count++;
    }

    cout << "count: " << count;

    return 0;
}