#include <iostream>

using namespace std;

class Fruit
{

public:
    string name;
};

class Mango : Fruit
{

public:
    int weight;
};

class alphanso : public Mango
{

public:
    int sugarLevel;
};

int main()
{

    alphanso a;
    cout << a.name << " " << a.weight << " " << a.sugarLevel << endl;

    return 0;
}