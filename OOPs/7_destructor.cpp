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

    // default constructor
    animal()
    { // constructor name always same as name as class
        // this means whenever this constructor is called make the below values as given
        this->weight = 0;
        this->age = 0;
        this->name = "";

        cout << "Constructor called" << endl;
    }

    // parameterised constructor
    animal(int age)
    {
        this->age = age;
        cout << "parameterised constructor called" << endl;
    }

    animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "parameterised constructor 2 called" << endl;
    }

    animal(int age, int weight, string name)
    {
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout << "parameterised constructor 3 called" << endl;
    }

    // copy constructor  (object to copy krta h)
    animal(animal &obj)
    { // copy se bachane k liye & use karenge otherwise code will show error
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "this is inside copy constructor" << endl;
    }

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

    ~animal()
    {
        cout << "i am inside in destructor" << endl; // if data store in stack(static) then it will delete automatically even we donot call this prove by this
    }
};

int main()
{

    // // object creation

    // // static
    // animal ramesh;
    // ramesh.age = 12;
    // ramesh.name = "lion";

    // cout << "Age of ramesh: " << ramesh.age << endl;
    // cout << "Name of ramesh: " << ramesh.name << endl;
    // // cout << "weight of ramesh: " << ramesh.weight << endl;

    // // to access the behaivour we to call it
    // ramesh.eat();
    // ramesh.sleep();

    // // accessing private in main
    // ramesh.setWeight(101);
    // cout << "weight of ramesh: " << ramesh.getWeight() << endl;

    // animal a;
    // cout << "calling constructor 1: ";
    // animal *b = new animal(100);
    // cout << "calling constructor 2: ";
    // animal *c = new animal(100, 10);
    // cout << "calling constructor 3: ";
    // animal *d = new animal(100, 10, "Ankit");

    // // object copy
    // animal e = a;

    // // alternate
    // animal animal(e);

    cout << "a obj creation: " << endl;
    animal a;
    a.age = 5;

    cout << "b obj creation: " << endl;
    animal *b = new animal();
    b->age = 12;

    delete b;

    return 0;
}