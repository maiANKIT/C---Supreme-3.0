#include <iostream>
#include <vector>

using namespace std;

int main()
{

   vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};

   int start = 0;
   int end = arr.size() - 1;
   for (int i = 0, j = arr.size() - 1; i < arr.size(); i++, j--)
   {
      if (arr[i] == 0)
      {
         swap(arr[start], arr[i]);
         start++;
      }

      else if (arr[i] == 1)
      {
         swap(arr[end], arr[i]);
         end--;
      }
   }

   for (int i = 0; i < arr.size() - 1; i++)
   {
      cout << arr[i] << " ";
   }

   return 0;
}