#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n;
   cout << "size: ";
   cin >> n;

   vector<int> gas(n), cost(n);

   cout << "enter values of gas: ";
   for (int i = 0; i < n; i++)
      cin >> gas[i];

   cout << "enter values of values: ";
   for (int i = 0; i < n; i++)
      cin >> cost[i];

   // kitna petrol kam padega
   int deficit = 0;

   // kitna petrol bacha h
   int balance = 0;

   // circuit jaha se start kiye h
   int start = 0;

   for(int i = 0; i<gas.size(); i++)
   {

      balance += gas[i] - cost[i];
      if(balance < 0){
         deficit += balance;
         start = i + 1;
         balance = 0;
      }

   }

   if(deficit + balance >= 0){
      cout<<start<<endl;
   }
   else cout<<-1<<endl;

   return 0;
}