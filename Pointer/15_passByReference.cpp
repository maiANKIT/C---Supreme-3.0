#include <iostream>

using namespace std;

void solve(int *a)
{

    a++;
}

void solve2(int *&a)
{

    a++;
}

int main()
{

    int a = 5;
    int *p = &a;

    cout << "before: " << p << endl;
    solve(p);
    cout << "after: " << p << endl;

    solve2(p);
    cout << "after2: " << p << endl;

    return 0;
}