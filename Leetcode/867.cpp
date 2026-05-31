#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cout<<"enter n&m: ";
    cin>>n>>m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i<n; i++){

        for(int j = 0; j<m; j++){
            cin>>matrix[i][j];
        }

    }

    cout<<"matrix: "<<endl;
    for(int i = 0; i<n; i++){

        for(int j = 0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }

    for(int i = 0; i<n; i++){

        for(int j = 0; j<i; j++){
            
            swap(matrix[i][j], matrix[j][i]);
            
        }
3120
    }

    cout<<"final matrix: "<<endl;;
    for(int i = 0; i<n; i++){

        for(int j = 0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;

   return 0;
}