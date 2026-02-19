#include <iostream>
#include <string>

int getLength(char name[])
{
    int length = 0;

    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}

using namespace std;

int main()
{

    // char name[100];
    // cout << "Enter your Name: ";
    // cin >> name;

    // int x = 0;
    // for (int i = 1; i < 100; i++)
    // {
    //     x++;
    //     if (name[i] == '\0')
    //     {
    //         break;
    //     }
    // }

    // cout << x;

    char name[100];
    cin.getline(name, 100);
    int length2 = getLength(name);
    cout << length2;

    int le = sizeof(name);
    cout << le;

    return 0;
}