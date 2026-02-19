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

    void setWeight(int w)
    {
        weight = w;
    }
};

int main()
{

    animal *suresh = new animal;
    // suresh.age = 15; // we cannot access it as it here suresh.age is address and we are asking for its type
    // suresh.name = "tiger";

    // To access it
    (*suresh).age = 15;
    (*suresh).name = "Tiger";

    // another method
    suresh->age = 17; // arrow operator
    suresh->name = "Tiger";

    return 0;
}