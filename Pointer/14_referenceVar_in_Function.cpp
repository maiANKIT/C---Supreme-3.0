#include <iostream>

using namespace std;

int solve(int a)
{

    a++;

    return a;
}

int solve2(int &a) // reference lga diya
{

    a++;

    return a;
}

void solve3(int *a)
{

    *a = *a + 1;

    // return a;
}

int main()
{

    int a = 5;

    solve(a); // pass by value {copy bani h}

    cout << a << endl;

    solve2(a); // pass by reference
    cout << a << endl;

    solve3(&a);
    cout << a << endl;

    return 0;
}