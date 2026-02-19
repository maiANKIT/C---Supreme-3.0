#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    vector<string> fizzBuzz(n);

    for (int i = 0; i < n; i++)
    {
        int m = i + 1;
        if (m % 3 == 0 && m % 5 == 0)
        {
            fizzBuzz[i] = "FizzBuzz";
        }
        else if (m % 3 == 0)
        {
            fizzBuzz[i] = "Fizz";
        }
        else if (m % 5 == 0)
        {
            fizzBuzz[i] = "Buzz";
        }
        else
        {
            int num = i + 1;
            fizzBuzz[i] = to_string(num);
        }
        // m = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << fizzBuzz[i] << " ";
    }

    return 0;
}