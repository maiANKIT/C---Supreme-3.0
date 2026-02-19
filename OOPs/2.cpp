#include <iostream>

using namespace std;

class animal
{

private:
    int weight;

public:
    // state or properties
    int age;
    string name;

    // behaviour
    void eat()
    {
        cout << "eating" << endl;
    }

    void sleep()
    {

        cout << "sleeping" << endl;
    }

    int getweight()
    {
        return weight;
    }

    void setweight(int w)
    {
        weight = w;
    }
};

int main()
{

    // object creation

    // static memory

    animal ramesh;
    ramesh.age = 12;
    ramesh.name = "Lion";
    cout << "age of ramesh: " << ramesh.age << endl;
    cout << "name of ramesh: " << ramesh.name << endl;
    // cout << "weight of ramesh: " << ramesh.weight << endl;

    ramesh.eat();
    ramesh.sleep();

    // access to private memeber
    ramesh.setweight(101);
    cout << "weight of ramesh: " << ramesh.getweight() << endl;

    // dynamic memory

    return 0;
}