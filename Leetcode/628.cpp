#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n;
   cout << "enter size: ";
   cin >> n;

   vector<int> nums(n);
   cout << "enter values: ";
   for (int i = 0; i < nums.size(); i++)
   {
      cin >> nums[i];
   }

   sort(nums.begin(), nums.end());

   int count = 0;
   int product = 1;
   if (nums[0] < 0 && nums[nums.size() - 1] < 0)
   {
      cout << "c-1" << endl;
      product = nums[0] * nums[1] * nums[2];
   }
   else if (nums[0] >= 0)
   {
      cout << "c-2" << endl;
      product = nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3];
   }
   else
   {
      cout << "c-3" << endl;
      int j = 0;
      int k = 0;
      for (int i = 0; i < 3; i++)
      {
         int x = max(nums[nums.size() - 1 - j], -1 * nums[k]);
         cout << "x: " << x << endl;

         if (count == 2 && product >= 0)
         {
            cout << "c-6" << endl;
            product = product * nums[nums.size() - 1 - j];
         }
         else if (x == -1 * nums[k])
         {
            cout << "c-4" << endl;
            product = product * x * (-1);
            k++;
         }
         else
         {
            cout << "c-5" << endl;
            product = product * x;
            j++;
         }

         count++;
      }
   }

   cout << product;

   return 0;
}