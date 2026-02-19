#include <iostream>
#include <map>

using namespace std;

int main()
{

    // creation of map
    map<int, char> m;
    m[0] = 'a';
    m[1] = 'b';
    m[25] = 'z';

    cout << "Your map is " << m[24] << endl;

    return 0;
}