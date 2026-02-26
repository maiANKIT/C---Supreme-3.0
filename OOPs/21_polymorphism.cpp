#include <iostream>

using namespace std;

class maths
{
public:
    int sum(int a, int b)
    {
        cout << "I am 1st" << endl;
        return a + b;
    }

    int sum(int a, int b, int c)
    {
        cout << "I am 2nd" << endl;
        return a + b + c;
    }

    int sum(int a, float b) // aur ha hum same naam ka function bna rhe h toh hme kewal ( ) iske andar hi change kr skte jaise number of datatype increase kr diya ya data type ko badal diya bas ye sb  aur bahar change krne ki kosish ki i mean int sum int wala part aur pahle se koi waisa baitha aur hm use lets say float me badal rhe toh nhi ayega error dega kyu complier confused ho gya kon sa lu int wala ki float wala function
    {
        cout << "I am 3rd" << endl;
        return a + b;
    }
};

int main()
{

    maths obj;
    cout << obj.sum(2, 5.12f); // f lagaya taki complier ko bataye ki point h toh float na ki double kyu ki complier by default double man k chlta h yadi specify na ho

    return 0;
}