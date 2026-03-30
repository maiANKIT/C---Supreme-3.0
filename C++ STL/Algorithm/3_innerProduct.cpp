#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{

    vector<int> a(3);
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    vector<int> b(3);
    b[0] = 3;
    b[1] = 4;
    b[2] = 5;

    int ans = inner_product(a.begin(), a.end(), b.begin(), 0);
    cout<<"product: "<<ans<<endl;

    return 0;
}