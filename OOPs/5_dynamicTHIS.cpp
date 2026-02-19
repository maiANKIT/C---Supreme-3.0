#include <iostream>

using namespace std;

class animal
{

    // state or properties

private:
    int weight;

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

    // to access the private we have to first make them to come in public  so
    int getWeight()
    {
        return weight;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
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
    // cout << "weight of ramesh: " << ramesh.weight << endl;

    // to access the behaivour we to call it
    ramesh.eat();
    ramesh.sleep();

    // accessing private in main
    ramesh.setWeight(101);
    cout << "weight of ramesh: " << ramesh.getWeight() << endl;

    return 0;
}