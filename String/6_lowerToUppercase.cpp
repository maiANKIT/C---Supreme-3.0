#include <iostream>
#include <string>

using namespace std;

int lengthofstring(char arr[])
{

    int length = 0;
    int i = 0;

    while (arr[i] != '\0')
    {
        i++;
        length++;
    }

    return length;
}

void convertIntoUppercase(char arr[])
{

    int n = lengthofstring(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - 'a' + 'A';
    }
}

int main()
{

    char name[100];
    cin.getline(name, 100);
    convertIntoUppercase(name);
    cout << name << endl;

    return 0;
}