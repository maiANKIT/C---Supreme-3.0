#include <iostream>
#include <string>

using namespace std;

int getLength(char name[])
{
    int length = 0;

    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}

int main()
{

    string s;
    cin >> s;

    int sum = 0;
    int n = s.length();

    if (n >= 1 && n <= 15)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'I')
            {
                sum++;
            }
            else if (s[i] == 'V')
            {
                sum = sum + 5;
            }
            else if (s[i] == 'X')
            {
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

    cout << "Integer value is: " << sum << endl;

    return 0;
}