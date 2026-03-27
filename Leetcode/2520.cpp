#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int num;
    cout<<"enter num: ";
    cin>>num;

    int count = 0;
    int x = num;
    while(num>0){

        int z = num%10;
        if(x % z == 0){
            count++;
        }
        num = num/10;

    }

    cout<<count;

   return 0;
}