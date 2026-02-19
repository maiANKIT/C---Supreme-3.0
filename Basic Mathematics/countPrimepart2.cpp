#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int main()
{

    int n;
    cout << "enter the number: ";
    cin >> n;

    int i = 2;
    int j = 2;
    int count = 0;

    vector<bool> n1(n, true);

    // for (int i = 2; i <= n; i++)
    // {
    //     n1.push_back(i);
    // }

    for (int i = 0; i < n1.size(); i++)
    {
        cout << n1[i] << " ";
    }

    // cout<<endl;

    // for(int i = 2; i<n1.size(); i++){
    //     if(n1[i]% == 0){
    //         count++;
    //     }
    // }

    // cout << count + 1;

    return 0;
}