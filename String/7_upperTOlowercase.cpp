#include <iostream>

using namespace std;

int lengthofstring(char arr[])
{
    int length = 0;
    int i = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

void lowerTOuppercase(char arr[])
{

    int n = lengthofstring(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'A' + 'a';
    }
}

int main()
{

    char name[100];
    cout << "Enter your name: ";
    cin.getline(name, 50);

    lowerTOuppercase(name);
    int size = lengthofstring(name);
    for (int i = 0; i < size; i++)
    {
        if (name[i] == '@')
        {
            name[i] = ' ';
        }
    }
    cout << name;

    return 0;
}