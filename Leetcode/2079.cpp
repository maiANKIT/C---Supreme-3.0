#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> plants(n);
    cout << "enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> plants[i];
    }

    int capacity;
    cout << "enter capacity: ";
    cin >> capacity;

    int x = capacity;

    int i = 0;
    int count = 0;

    while (i < plants.size())
    {

        if (plants[i] > capacity)
        {
            count = count + 2 * i  + 1;
            capacity = x - plants[i];
            cout << "c1" << endl;
        }
        else if(plants[i] == capacity){
            count = count + 2*(i+1) + 1;
            capacity = x - plants[i];
            cout<<"c3"<<endl;
        }
        else
        {
            capacity -= plants[i];
            count++;
            cout << "c2" << endl;
        }

        i++;
    }

    cout << count;

    return 0;
}