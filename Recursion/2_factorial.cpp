#include <iostream>

using namespace std;

int factorial(int n)
{

    if (n == 1)
    {
        return 1;
    }

    int chotiProblemAns = factorial(n - 1);
    int badiproblemAns = n * chotiProblemAns;

    return badiproblemAns;
}

int main()
{

    int n;
    cout << "enter the n: ";
    cin >> n;

    int ans = factorial(n);
    cout << ans;

    return 0;
}