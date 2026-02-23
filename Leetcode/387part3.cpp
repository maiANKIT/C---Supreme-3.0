#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// int binarySearch(string s, char c, int start, int end){

//     int mid = start + (end - start)/2;

//     int i = 0;
//     while(start<=end){

//         if(c == s[mid]){
//             return mid;
//         }
//         else if(c)

//     }

// }

int main()
{

    string s;
    cout << "enter the string: ";
    cin >> s;

    string t = s;

    int start = 0;
    int end = s.size() - 1;

    int index = -1;

    // sort

    // for (int i = 0; i < s.size(); i++)
    // {

    //     index = binarySearch(s, s[i], start, end);

    //     if(index == -1){
    //         break;
    //     }

    // }

    sort(s.begin(), s.end());

    cout << "sorted string: " << s << endl;
    char ch = '@';

    for (int i = 0; i < s.size() - 1; i++)
    {

        if (s[i] == s[i + 1])
        {
            i++;
        }
        else
        {
            ch = s[i];
            break;
        }
    }

    for (int i = 0; i < t.size(); i++)
    {

        if (ch == t[i])
        {
            index = i;
            cout << ch;
            break;
        }
    }

    cout << index;

    return 0;
}