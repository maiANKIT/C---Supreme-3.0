#include <bits/stdc++.h>

using namespace std;

int factorial(int n){

    //base case
    if(n == 0 ||n == 1) return 1;

    //small problem
    int chhoti = factorial(n-1);
    //chhoti problem
    int badi = chhoti*n;

    return badi;
    
}

int main()
{

    int n;
    cout<<"enter value to find its factorial: ";
    cin>>n;

    int x = factorial(n);
    cout<<x;

   return 0;
}