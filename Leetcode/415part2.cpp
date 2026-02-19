#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string num1;
    cout << "enter the num1: ";
    cin >> num1;

    string num2;
    cout << "enter the num2: ";
    cin >> num2;

    int sum = stoi(num1) + stoi(num2);

    cout << to_string(sum);

    return 0;
}