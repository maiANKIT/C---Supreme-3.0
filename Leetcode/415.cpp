#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string num1;
    cout << "enter the string: ";
    cin >> num1;

    string num2;
    cout << "enter the string2: ";
    cin >> num2;

    vector<int> a(num1.size());
    for (int i = 0; i < num1.size(); i++)
    {

        a[i] = num1[i] - 48;
        cout << a[i] << " ";
    }
    cout << endl;
    vector<int> b(num2.size());
    for (int i = 0; i < num2.size(); i++)
    {

        b[i] = num2[i] - 48;
        cout << b[i] << " ";
    }
    cout << endl;

    int sum1 = 0;
    for (int i : a)
    {
        sum1 = sum1 * 10 + i;
    }
    cout << sum1 << endl;

    int sum2 = 0;
    for (int i : b)
    {
        sum2 = sum2 * 10 + i;
    }
    cout << sum2 << endl;

    int sum3 = sum1 + sum2;

    cout << sum3 << endl;

    // int num = 1234;
    // int digits[10]; // assuming max 10 digits
    vector<int> digits;
    int count = 0;

    // Extract digits
    while (sum3 > 0)
    {
        digits.push_back(sum3 % 10); // get last digit

        sum3 = sum3 / 10; // remove last digit
        count++;
    }

    cout << sizeof(digits) / sizeof(digits[0]) << endl;

    for (int i = 0; i < sizeof(digits) / sizeof(digits[0]); i++)
    {

        cout << digits[i] << " ";
    }
    cout << endl;

    // int j = sizeof(digits) / sizeof(digits[0]) - 1;
    // int i = 0;
    // while (i < j)
    // {
    //     swap(digits[i], digits[j]);
    //     i++;
    //     j--;
    // }

    char num3[sizeof(digits) / sizeof(digits[0])];
    for (int i = 0; i < sizeof(digits) / sizeof(digits[0]); i++)
    {

        num3[sizeof(digits) / sizeof(digits[0]) - 1 - i] = digits[sizeof(digits) / sizeof(digits[0]) - 1 - i] + 48;
    }

    for (int i = 0; i < sizeof(digits) / sizeof(digits[0]); i++)
    {

        cout << num3[i] << " ";
    }

    cout << endl;

    string s = "";
    for (int i = 0; i < sizeof(digits) / sizeof(digits[0]); i++)
    {

        s = s + num3[sizeof(digits) / sizeof(digits[0]) - 1 - i];
    }

    cout << s << endl;

    cout << s;

    return 0;
}