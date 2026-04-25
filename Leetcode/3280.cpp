#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a;
    cin>>a;

    string x = string()+ a[0] + a[1] + a[2] + a[3];
    string y = string()+ a[5] + a[6];
    string z = string() + a[8] + a[9];

    int yy = stoi(x);
    int mm = stoi(y);
    int zz = stoi(z);

    string n =  bitset<12>(yy).to_string() + '-' + bitset<12>(mm).to_string() + '-' + bitset<12>(zz).to_string();
    cout<<n;

   return 0;
}