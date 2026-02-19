#include <iostream>
#include <string>

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

bool checkPallindrome(char name[])
{
    int i = 0;
    int size = getLength(name);
    int j = size - 1;

    while (i <= j)
    {
        if (name[i] != name[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{

    char arr[100];

    cin.getline(arr, 50);

    int isPallindrome = checkPallindrome(arr);

    if (isPallindrome == 0)
    {
        cout << "Not a Pallindrome" << endl;
    }
    else
    {
        cout << "Pallindrome" << endl;
    }
    return 0;
}