// this is homework question

#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {

        if (arr[i + 1] - arr[i] != 1)
        {
            cout << "Missing number is " << arr[i] << endl;
        }
    }

    return 0;
}