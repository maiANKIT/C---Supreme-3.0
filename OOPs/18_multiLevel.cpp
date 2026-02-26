#include <iostream>

using namespace std;

// yadi do k variable ka naam same ho jaiga toh hmse class bhi batana padega

class A
{
public:
    int chemistry;
};

class B
{
public:
    int chemistry;
};

class C : public A, public B
{

public:
    int maths;
};

int main()
{

    C obj;
    cout << obj.A::chemistry << " " << obj.B::chemistry << " " << obj.maths << endl;

    return 0;
}