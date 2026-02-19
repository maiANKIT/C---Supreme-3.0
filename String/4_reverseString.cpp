#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int getLength(char arr[])
{
    int size = 0;

    int i = 0;
    while (arr[i] != '\0')
    {
        size++;
        i++;
    }
    return size;
}

void reverseString(char name[])
{
    int i = 0;
    int n = getLength(name);
    int j = n - 1;

    while (i < j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}

void replaceSpace(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
        i++;
    }
}

int main()
{

    char name[100];
    cout << "Enter the name ";
    cin.getline(name, 100);

    cout << "length of string is " << getLength(name);

    cout << "Intially: " << name << endl;
    reverseString(name);
    cout << "Finally: " << name << endl;

    replaceSpace(name);
    cout << "Replaced value is: " << name;

    return 0;
}