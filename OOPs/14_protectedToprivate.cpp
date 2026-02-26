#include <iostream>

using namespace std;

class animal
{
protected:
    int age;
};

class dog : private animal
{

public:
    void print()
    {
        cout << this->age;
    }
};

int main()
{

    dog d1;
    d1.print();

    return 0;
}