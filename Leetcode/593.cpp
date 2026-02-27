#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> p1(2);
    vector<int> p2(2);
    vector<int> p3(2);
    vector<int> p4(2);

    cout << "enter p1 values: ";
    for (int i = 0; i < 2; i++)
    {
        cin >> p1[i];
    }

    cout << "enter p2 values: ";
    for (int i = 0; i < 2; i++)
    {
        cin >> p2[i];
    }

    cout << "enter p3 values: ";
    for (int i = 0; i < 2; i++)
    {
        cin >> p3[i];
    }

    cout << "enter p4 values: ";
    for (int i = 0; i < 2; i++)
    {
        cin >> p4[i];
    }

    int x = (p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1]);
    cout << "this is x: " << x << endl;

    int y = (p4[0] - p3[0]) * (p4[0] - p3[0]) + (p4[1] - p3[1]) * (p4[1] - p3[1]);
    cout << "this is y: " << y << endl;

    int a = (p4[0] - p1[0]) * (p4[0] - p1[0]) + (p4[1] - p1[1]) * (p4[1] - p1[1]);
    cout << "side a: " << a << endl;

    int b = (p3[0] - p1[0]) * (p3[0] - p1[0]) + (p3[1] - p1[1]) * (p3[1] - p1[1]);
    cout << "side b: " << b << endl;

    int z = 0;

    int area = a * b;
    cout << "area: " << area << endl;
    int area2 = x * y;
    cout << "area2: " << area2 << endl;

    if (a == b && x == y)
    {
        z = 1;
    }

    cout << "ans: " << z;

    return 0;
}