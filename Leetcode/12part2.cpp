#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "enter num: ";
    cin >> num;

    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string finalRoman = "";
    for (int i = 0; i < sizeof(roman) / sizeof(roman[0]); i++)
    {
        while (num >= values[i])
        {
            finalRoman = finalRoman + roman[i];
            num = num - values[i];
        }
    }

    cout << finalRoman;

    return 0;
}