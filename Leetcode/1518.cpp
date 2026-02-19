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

    int remain = numBottles%numExchange;
    int remainEX = remain + numBottles/numExchange;

    if(remainEX > numExchange){

        sum = sum + remainEX/numExchange;

    }
    else{
        
    }

    

    cout << sum;

    return 0;
}