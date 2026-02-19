#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // create vector
    vector<int> arr;
    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;

    // insert in array
    arr.push_back(5);
    arr.push_back(6);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove
    arr.pop_back();

    //[print]
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "vector arr is empty or not: " << arr.empty() << endl;

    return 0;
}