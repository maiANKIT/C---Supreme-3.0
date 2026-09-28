#include <bits/stdc++.h>

using namespace std;

int climbingStair(int n){

    //base case
    if(n == 0 || n == 1) return 1;

    int ans = climbingStair(n-1) + climbingStair(n-2);

    return ans;

}

int main()
{

    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int ans = climbingStair(n);

    cout<<"answer is: "<<ans<<endl;



   return 0;
}