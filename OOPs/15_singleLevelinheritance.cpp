#include <iostream>

using namespace std;

class car
{

public:
    string name;
    int weight;
    int age;

    void speedUp()
    {
        cout << "Speeding Up" << endl;
    }

    void breakMaro()
    {
        cout << "break mardi" << endl;
    }
};

class Scorpio : public car
{
};

int main()
{

    Scorpio babbarWali;
    babbarWali.speedUp();

    return 0;
}