#include <iostream>

using namespace std;

class animal
{

    // state or properties

public: // public likhte hi sara data niche ka public ho gya
    int age;
    string name;

    // behaiviour or function
    void eat()
    {
        cout << "eating" << endl;
    }

    void sleep()
    {
        cout << "sleeping" << endl;
    }
};

int main()
{

    // object creation

    // static
    animal ramesh;
    ramesh.age = 12;
    ramesh.name = "lion";

    cout << "Age of ramesh: " << ramesh.age << endl;
    cout << "Name of ramesh: " << ramesh.name << endl;

    // to access the behaivour we to call it
    ramesh.eat();
    ramesh.sleep();

    return 0;
}