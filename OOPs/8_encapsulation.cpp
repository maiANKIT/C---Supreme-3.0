#include <iostream>

using namespace std;

class animal
{
private:
    int age;
    int weight;

    // private ko access krne k liye pahle public me aa k getter aur setter use kro

public:
    void eat()
    {
        cout << "eating" << endl;
    }

    // accessing private
    int getAge()
    {
        return this->age;
    }

    void setAge(int age)
    {
        this->age = age;
    }
};

int main()
{

    return 0;
}