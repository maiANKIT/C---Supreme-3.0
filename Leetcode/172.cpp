#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int factorial(int n)
{

    if (n == 1)
    {
        return 1;
    }

    int ans = n * factorial(n - 1);

    return ans;
}

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    int count = 0;

    if (n == 0)
    {
        cout << count << endl;
    }
    else
    {

        int fact = factorial(n);

        cout << fact << endl;

        vector<int> digits;

        int i = 0;

        while (fact > 0)
        {

            digits.push_back(fact % 10);
            fact = fact / 10;
        }

        cout << "digits are: ";
        for (int i = 0; i < digits.size(); i++)
        {
            cout << digits[i] << " ";
        }

        cout << endl;

        // int count = 0;
        for (int i = 0; i < digits.size(); i++)
        {
            // count++;
            if (digits[i] != 0)
            {
                break;
            }
            count++;
        }

        cout << "number of zeros: " << count << endl;
    }

    return 0;
}