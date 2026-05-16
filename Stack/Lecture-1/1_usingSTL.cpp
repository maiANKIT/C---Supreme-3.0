#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();

    cout<<"element on top: "<<st.top()<<endl;

    cout<<"size: "<<st.size()<<endl;

    if(st.empty()) cout<<"stack is empty"<<endl;
    else cout<<"not empty"<<endl;

    //print stack
    while(!st.empty()){

        cout<<st.top()<<" ";
        st.pop();

    }

   return 0;
}