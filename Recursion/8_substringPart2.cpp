#include <iostream>
#include <string>

using namespace std;

void printSubsequences(string str, string output, int i)
{

    // base case
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }

    // exclude
    printSubsequences(str, output, i + 1);

    // include
    // below line is responsible for concatetaion of output string ans ith chararcter of str string
    output = output + str[i];
    printSubsequences(str, output, i + 1);
}

int main()
{

    string str;
    cout << "enter the string: ";
    cin >> str;

    string output = "";

    int i = 0;
    printSubsequences(str, output, i);

    return 0;
}