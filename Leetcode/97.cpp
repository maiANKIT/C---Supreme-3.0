#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    string s3;
    cin>>s3;

    string s4 = s1+s2;
    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());

    bool x = 0;
    if(s3 == s4) x = 1;
    
    cout<<x;

   return 0;
}