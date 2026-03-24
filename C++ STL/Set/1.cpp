#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main()
{

    //ye sirf unique element ko store krta h
    //sets k type: 1. unordered set TC: O(1), 2. ordered set TC: O(logn)
    //ordered set: sorted
    //unordered set: unsorted
    
    cout<<"ordered set: "<<endl;
    set<int> st;
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    //traverse
    set<int>::iterator it = st.begin();

    while(it != st.end()){
        cout<<*it<<" ";
        it++;
    }

    cout<<"unordered set: "<<endl;
    unordered_set<int> st1;
    st1.insert(10);
    st1.insert(15);
    st1.insert(8);
    st1.insert(4);

    //traverse
    unordered_set<int>::iterator it1 = st1.begin();

    while(it1 != st1.end()){
        cout<<*it1<<" ";
        it1++;
    }

   return 0;
}