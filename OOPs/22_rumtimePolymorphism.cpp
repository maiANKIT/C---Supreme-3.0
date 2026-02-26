#include <iostream>

using namespace std;

class animal
{

public:
    virtual void speak() // use virtual to call child
    {
        cout << "speaking: " << endl;
    }
};

class dog : public animal
{

public:
    // overriding
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main()
{

    // dog a;
    // a.speak();

    // animal *a = new animal();
    // a->speak();

    // dog *a = new dog();
    // a->speak();

    // upcasting
    animal *a = new dog();
    a->speak(); // is tarah hmsha parent ka function call hota h yadi child ka function krna h toh is case me hme virtual use krna hoga parent k function me

    // downcasting
    dog *d = (dog *)new animal();
    d->speak();

    return 0;
}