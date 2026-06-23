#include <bits/stdc++.h>

using namespace std;

int main()
{

    string text;
    cin>>text;

    int b = 0, a= 0, l= 0, o= 0, n= 0;

        for(int i = 0; i<text.size(); i++){

            if(text[i] == 'b') b++;
            else if(text[i] == 'a') a++;
            else if(text[i] == 'l') l++;
            else if(text[i] == 'o') o++;
            else if(text[i] == 'n') n++;

        }

        if(b == 0 || a == 0 ||  l == 0 || o == 0 || n == 0){
            cout<<"values: "<<0<<endl;
        }
        else if(b > 0 || a > 0 ||  l > 0 || o > 0 || n > 0){

            int count = 0;

            while(b>0 && a>0 && l>1 && o>1 && n>0){

                b--;
                a--;
                l = l - 2;
                o = o - 2;
                n--;
                count++;

            }

            cout<<"values: " <<count;

        }

   return 0;
}