#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);

    make_heap(arr.begin(), arr.end()); // yadi vector pahle se bna h toh ye use kro yadi heap phle se h aur push krna chte ho ho array k and pahle push karo phir ye follow kro

    //insertion
    arr.push_back(99);
    push_heap(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    //deletion
    pop_heap(arr.begin(), arr.end()); //pahle heap se nikal lo phir jb vector me aa jaiga tb use pop_back kr lo
    arr.pop_back();

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    //sort heap
    sort_heap(arr.begin(), arr.end());
    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;


    return 0;
}