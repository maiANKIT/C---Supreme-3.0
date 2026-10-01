#include <bits/stdc++.h>

using namespace std;

int solve(int n, int x, int y, int z){

    //bs
    if(n == 0) return 0;

    if(n < 0) return INT_MIN;

    int ans1 = solve(n-x, x, y, z) + 1;
    int ans2 = solve(n-y, x, y, z) + 1;
    int ans3 = solve(n-z, x, y, z) + 1;
    
    int ans = max(ans1, max(ans2, ans3));

    return ans;
    
}

int main()
{

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int x, y, z;
    cin>>x>>y>>z;

    //solve function return maximum numbers of segments
    int ans = solve(n, x, y, z);

    if(ans < 0) cout<<0<<endl;
    else
    cout<<ans<<endl;

   return 0;
}