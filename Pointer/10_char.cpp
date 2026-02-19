#include <iostream>

using namespace std;

int main()
{

    char ch = 'k';
    char *cptr = &ch;

    cout << cptr << endl;

    string chh = "K";
    string *cptr1 = &chh;
    cout << cptr1 << endl;

    return 0;
}