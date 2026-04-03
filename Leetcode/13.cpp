#include <iostream>

using namespace std;

int main()
{

    string s;
    cout << "enter string: ";
    cin >> s;

    int sum = 0;
    int n = s.length();

    if (n >= 1 && n <= 15)
    {
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && s[i] == 'I' && s[i + 1] == 'V')
            {
                sum = sum + 4;
                i++;
            }
            else if (i < n - 1 && s[i] == 'I' && s[i + 1] == 'X')
            {
                sum = sum + 9;
                i++;
            }
            else if (i < n - 1 && s[i] == 'X' && s[i + 1] == 'L')
            {
                sum = sum + 40;
                i++;
            }
            else if (i < n - 1 && s[i] == 'X' && s[i + 1] == 'C')
            {
                sum = sum + 90;
                i++;
            }
            else if (i < n - 1 && s[i] == 'C' && s[i + 1] == 'D')
            {
                sum = sum + 400;
                i++;
            }
            else if (i < n - 1 && s[i] == 'C' && s[i + 1] == 'M')
            {
                sum = sum + 900;
                i++;
            }
            else if (s[i] == 'I')
            {
                sum++;
            }
            else if (s[i] == 'V')
            {
                sum = sum + 5;
            }
            else if(s[i] == 'X'){
                sum = sum + 10;
            }

            else if (s[i] == 'L')
            {
                sum = sum + 50;
            }
            else if (s[i] == 'C')
            {
                sum = sum + 100;
            }
            else if (s[i] == 'D')
            {
                sum = sum + 500;
            }
            else if (s[i] == 'M')
            {
                sum = sum + 1000;
            }
        }
    }

    cout << sum;

    return 0;
}