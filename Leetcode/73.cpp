#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cout<<"enter m & n";
    cin>>m>>n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout<<"enter values: ";
    for(int i = 0; i<m; i++){

        for(int j = 0; j<n; j++){
            cin>>matrix[i][j];
        }

    }

    

   return 0;
}