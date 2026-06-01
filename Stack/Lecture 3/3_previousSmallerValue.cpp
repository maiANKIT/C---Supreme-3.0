#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    cout << "enter values: ";
    vector<int> v(n);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    stack<int> s;
    s.push(-1);

    vector<int> nums(v.size());

    for (int i = 0; i < v.size(); i++)
    {

        int curr = v[i];

        //answer in stack
        while(s.top() >= curr){

            s.pop();

        }

        //chota answer mil chuka h answer store kr lete h
        nums[i] = s.top();

        //push kardo curr element ko
        s.push(curr);

    }

    cout << "printing: ";
    for (int i = 0; i < nums.size(); i++)
    {

        cout << nums[i] << " ";
    }

    return 0;
}