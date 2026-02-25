#include <iostream>

using namespace std;

class animal
{

protected:
    int age;
};

class dog : protected animal
{

}

int
main()
{

    return 0;
}