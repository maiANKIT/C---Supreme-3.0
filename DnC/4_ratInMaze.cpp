#include <bits/stdc++.h>

using namespace std;

void solveMaze(int arr[3][3], int row, int col, int i, int j, vector<vector<bool>> &visited, string output)
{

   // base case
   if (srcx == row - 1 && srcy == col - 1)
   {
      // answer found
      path.push_back(output);
      return;
   }

   // down: i+1, j
   if (isSafe(i + 1, j, row, col, arr, visited))
   {
      visited[i + 1][j] = true;
      solveMaze(arr, row, col, i + 1, j, visited, path, output + 'D');
      // backtrack
      visited[i + 1][j] = false;
   }

   // left: i, j - 1
   if (isSafe(i, j - 1, row, col, arr, visited))
   {
      visited[i][j - 1] = true;
      solveMaze(arr, row, col, i, j - 1, visited, path, output + 'L');
      // backtrack
      visited[i][j - 1] = false;
   }

   // right: i, j + 1
   if (isSafe(i, j + 1, row, col, arr, visited))
   {
      visited[i][j + 1] = true;
      solveMaze(arr, row, col, i, j + 1, visited, path, output + 'R');
      // backtrack
      visited[i][j + 1] = false;
   }

   // up: i-1, j
   if (isSafe(i - 1, j, row, col, arr, visited))
   {
      visited[i - 1][j] = true;
      solveMaze(arr, row, col, i - 1, j, visited, path, output + 'U');
      // backtrack
      visited[i - 1][j] = false;
   }
}

int main()
{

   int maze[3][3] = {{1, 0, 0},
                     {1, 1, 0},
                     {1, 1, 1}};

   int row = 3;
   int col = 3;

   vector<vector<bool>> visited(row, vector<bool>(col, false));
   // src ki value k true mark kredete h
   visited[0][0] = true;

   vector<string> path;
   string output = "";

   solveMaze(arr, row, 0, 0, visitedm path, output);

   return 0;
}