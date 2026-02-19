#include <iostream>
#include <string>

using namespace std;

void printSubsequences(string str, string output, int i, int count)
{

    // base case
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }

    // exclude
    printSubsequences(str, output, i + 1, count++);

    // include
    // below line is responsible for concatetaion of output string ans ith chararcter of str string
    output.push_back(str[i]);
    printSubsequences(str, output, i + 1, count++);
}

int main()
{

    string str;
    cout << "enter the string: ";
    cin >> str;

    string output = "";

    int i = 0;
    int count = 0;
    printSubsequences(str, output, i, count);
    cout << count;

    return 0;
}