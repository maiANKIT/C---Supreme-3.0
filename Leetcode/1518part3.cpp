#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    int numBottles;
    cout << "enter the bottles numbers: ";
    cin >> numBottles;

    int numExchange;
    cout << "enter the size of exchanges: ";
    cin >> numExchange;

    int sum = numBottles;

    for (int i = 0;; i++)
    {

        sum = sum + numBottles / numExchange;
        numBottles = numBottles / numExchange + numBottles % numExchange;

        if (numBottles % numExchange == 0)
        {
            sum = sum - 1;
        }

        if (numBottles < numExchange)
        {
            break;
        }
    }

    cout << sum;

    return 0;
}