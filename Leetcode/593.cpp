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

    // this is 12
    int x2 = (p1[0] - p2[0]) * (p1[0] - p2[0]) + (p1[1] - p2[1]) * (p1[1] - p2[1]);
    cout << "this is x2: " << x2 << endl;

    int y2 = (p4[0] - p3[0]) * (p4[0] - p3[0]) + (p4[1] - p3[1]) * (p4[1] - p3[1]);
    cout << "this is y2: " << y2 << endl;

    int a2 = (p4[0] - p1[0]) * (p4[0] - p1[0]) + (p4[1] - p1[1]) * (p4[1] - p1[1]);
    cout << "side a2: " << a2 << endl;

    int b2 = (p3[0] - p1[0]) * (p3[0] - p1[0]) + (p3[1] - p1[1]) * (p3[1] - p1[1]);
    cout << "side b2: " << b2 << endl;

    int c2 = (p4[0] - p2[0]) * (p4[0] - p2[0]) + (p4[1] - p2[1]) * (p4[1] - p2[1]);
    cout << "side c2: " << c2 << endl;

    int d2 = (p3[0] - p2[0]) * (p3[0] - p2[0]) + (p3[1] - p2[1]) * (p3[1] - p2[1]);
    cout << "side d2: " << d2 << endl;

    // this is 13
    int x3 = (p1[0] - p3[0]) * (p1[0] - p3[0]) + (p1[1] - p3[1]) * (p1[1] - p3[1]);
    cout << "this is x3: " << x3 << endl;

    int y3 = (p2[0] - p4[0]) * (p2[0] - p4[0]) + (p2[1] - p4[1]) * (p2[1] - p4[1]);
    cout << "this is y3: " << y3 << endl;

    int a3 = (p2[0] - p1[0]) * (p2[0] - p1[0]) + (p2[1] - p1[1]) * (p2[1] - p1[1]);
    cout << "side a3: " << a3 << endl;

    int b3 = (p4[0] - p1[0]) * (p4[0] - p1[0]) + (p4[1] - p1[1]) * (p4[1] - p1[1]);
    cout << "side b3: " << b3 << endl;

    int c3 = (p2[0] - p3[0]) * (p2[0] - p3[0]) + (p2[1] - p3[1]) * (p2[1] - p3[1]);
    cout << "side c3: " << c3 << endl;

    int d3 = (p4[0] - p3[0]) * (p4[0] - p3[0]) + (p4[1] - p3[1]) * (p4[1] - p3[1]);
    cout << "side d3: " << d3 << endl;

    // this is 14
    int x4 = (p1[0] - p4[0]) * (p1[0] - p4[0]) + (p1[1] - p4[1]) * (p1[1] - p4[1]);
    cout << "this is x4: " << x4 << endl;

    int y4 = (p2[0] - p3[0]) * (p2[0] - p3[0]) + (p2[1] - p3[1]) * (p2[1] - p3[1]);
    cout << "this is y4: " << y4 << endl;

    int a4 = (p2[0] - p1[0]) * (p2[0] - p1[0]) + (p2[1] - p1[1]) * (p2[1] - p1[1]);
    cout << "side a4: " << a4 << endl;

    int b4 = (p3[0] - p1[0]) * (p3[0] - p1[0]) + (p3[1] - p1[1]) * (p3[1] - p1[1]);
    cout << "side b4: " << b4 << endl;

    int c4 = (p2[0] - p4[0]) * (p2[0] - p4[0]) + (p2[1] - p4[1]) * (p2[1] - p4[1]);
    cout << "side c4: " << c4 << endl;

    int d4 = (p3[0] - p4[0]) * (p3[0] - p4[0]) + (p3[1] - p4[1]) * (p3[1] - p4[1]);
    cout << "side d4: " << d4 << endl;

    bool z = 0;

    if (a2 == b2 && b2 == c2 && c2 == d2 && x2 == y2 && a2 != 0 && x2 != 0 && y2 == 2 * a2)
    {
        z = 1;
    }
    else if (a3 == b3 && b3 == c3 && c3 == d3 && x3 == y3 && b3 != 0 && x3 != 0 && y3 == 2 * a3)
    {
        z = 1;
    }
    else if (a4 == b4 && b4 == c4 && c4 == d4 && x4 == y4 && b4 != 0 && y4 != 0 && y4 == 2 * a4)
    {
        z = 1;
    }

    cout << "ans: " << z;

    return 0;
}