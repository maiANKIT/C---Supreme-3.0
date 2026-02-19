#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{

    string num1;
    cout << "enter the string1: ";
    cin >> num1;

    string num2;
    cout << "enter the string: ";
    cin >> num2;

    unsigned long long i = 0;
    unsigned long long sum1 = 0;

    while (i < num1.size())
    {
        sum1 = num1[i] - 48 + sum1 * 10;
        i++;
    }

    cout << "int sum1: " << sum1 << endl;
    i = 0;

    unsigned long long sum2 = 0;
    while (i < num2.size())
    {
        sum2 = num2[i] - 48 + sum2 * 10;
        i++;
    }

    cout << "int sum2: " << sum2 << endl;

    unsigned long long ans = sum1 + sum2;

    cout << "int ans: " << ans << endl;

    string t = "";
    string f = "";
    if (ans == 0)
    {
        f = 0 + '0';
    }
    else
    {
        while (ans != 0)
        {
            t = ans % 10 + '0';
            f = f + t;
            ans = ans / 10;
        }

        cout << "rev ans: " << f << endl;

        // i = 0
        if (f.size() > 1)
        {

            for (unsigned long long i = 0; i < f.size() / 2; i++)
            {
                swap(f[i], f[f.size() - i - 1]);
            }
        }
    }

    cout << "final ans: " << f;

    // stringstream t;
    // t << ans;

    // string str = t.str();
    // cout << str;

    return 0;
}