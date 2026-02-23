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

    for (int i = 0; i < s.size(); i++)
    {

        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                break;
            }
            else if ((s[i] != s[j]) &&)
            {
                brea
            }
        }
    }

    cout << index;

    return 0;
}