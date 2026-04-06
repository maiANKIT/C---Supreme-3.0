#include <bits/stdc++.h>

using namespace std;

int main()
{

    int numerator;
    cout << "numerator: ";
    cin >> numerator;

    int denominator;
    cout << "denominator: ";
    cin >> denominator;

    string x = to_string((double)numerator / denominator);
    cout <<"x: " <<x;

    for(int i = x.size() - 1; i>=0; i--){
        if(x[i] == '0') 
    }

    return 0;
}