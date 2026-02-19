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

    int count = 0;
    int sum = numBottles;

    // int remain = numBottles % numExchange;
    // int remainEX = numBottles % numExchange + numBottles / numExchange;
    int remainEX = 0;

    // if (remainEX > numExchange)
    // {

    //     while (int i = 1)
    //     {

    //         sum = sum + remainEX / numExchange;
    //         // remain = numBottles % numExchange;
    //         remainEX = numBottles % numExchange + numBottles / numExchange;

    //         if (remainEX > numExchange)
    //         {
    //             break;
    //         }

    //         // else
    //         // {
    //         // }
    //     }
    // }

    for (int i = 0;; i++)
    {

        // sum = sum + remainEX / numExchange;
        remainEX = numBottles % numExchange + numBottles / numExchange;
        sum = sum + remainEX / numExchange;
        remainEX = remainEX / numExchange;

        if (remainEX < numExchange)
        {
            break;
        }
    }

    cout << sum;

    return 0;
}