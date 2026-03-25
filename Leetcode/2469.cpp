#include <iostream>

using namespace std;

int main()
{

    double celcius;
    cout<<"enter double: ";
    cin>>celcius;

    int k = celcius + 273.15;
    int f = celcius*1.80 + 32.00;

    cout<<"k: "<<k<<endl;
    cout<<"f: "<<f<<endl;

   return 0;
}