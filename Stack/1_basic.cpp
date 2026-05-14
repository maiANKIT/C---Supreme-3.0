#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{

    //creation of stack
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();

    //check top element of stack
    cout<<"top value: "<<st.top()<<endl;

    //size of stack
    cout<<"size: "<<st.size()<<endl;

    if(st.empty()) cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;

    cout<<"stack: "; //print will be reverse order
    while(!st.empty()){

        cout<<st.top()<<" ";
        st.pop();

    }

   return 0;
}