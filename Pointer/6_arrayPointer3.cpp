#include <iostream>

using namespace std;

int main()
{

    int arr[4] = {12, 14, 16, 18};

    int i = 0;

    cout << arr[i] << endl;
    cout << i[arr] << endl;
    cout << *(arr + i) << endl;
    cout << *(i + arr) << endl;

    return 0;
}