#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

       string s;
       cout << "enter the string: ";
       getline(cin, s);

       for (int i = 0; i < s.size();)
       {
              if (s[i + 1] == ' ' && s[i] == ' ')
              {
                     s.erase(i, 1);
              }
              else
              {
                     i++;
              }
       }

       cout << s << endl;

       if (s[0] == ' ')
       {
              s.erase(0, 1);
       }
       else if (s[s.size() - 1] == ' ')
       {
              s.erase(s.size() - 1, 1);
       }

       cout << s << endl;

       vector<string> a;

       string t = "";
       for (int i = 0; i < s.size(); i++)
       {
              if (s[i] == ' ')
              {
                     a.push_back(t);
                     t = "";
              }
              else if (i == s.size() - 1)
              {
                     a.push_back(t + s[i]);
              }
              else
              {
                     t = t + s[i];
              }
       }

       string b = "";
       for (int i = a.size() - 1; i >= 0; i--)
       {

              if (a.size() > 0)
              {
                     b = b + a[i] + " ";
              }
              else if (a.size() == 0)
              {
                     b = b + a[i];
              }
       }

       cout << b;

       return 0;
}