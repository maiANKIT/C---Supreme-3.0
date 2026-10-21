#include <bits/stdc++.h>

using namespace std;

bool isSafe(int i, int j, int row, int col, int maze[3][3], vector<vector<bool>> &visited)
{

    if ((i >= 0 && i < row) && (j >= 0 && j < col) && (maze[i][j] == 1) && (visited[i][j] == false))
    {

        return true;
    }
    else
    {

        return false;
    }
}

void solveMaze(int maze[3][3], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{

    // base case
    if (i == row - 1 && j == col - 1)
    {

        path.push_back(output);
        return;
    }

    // right
    if (isSafe(i, j + 1, row, col, maze, visited))
    {

        visited[i][j + 1] = true;
        solveMaze(maze, row, col, i, j + 1, visited, path, output + 'R');
        // backtrack
        visited[i][j + 1] = false;
    }

    // left
    if (isSafe(i, j - 1, row, col, maze, visited))
    {

        visited[i][j - 1] = true;
        solveMaze(maze, row, col, i, j - 1, visited, path, output + 'L');

        // backtrack
        visited[i][j - 1] = false;
    }

    // up
    if (isSafe(i - 1, j, row, col, maze, visited))
    {

        visited[i - 1][j] = true;
        solveMaze(maze, row, col, i - 1, j, visited, path, output + 'U');

        // backtrack
        visited[i - 1][j] = false;
    }

    // down
    if (isSafe(i + 1, j, row, col, maze, visited))
    {

        visited[i + 1][j] = true;
        solveMaze(maze, row, col, i + 1, j, visited, path, output + 'D');

        // backtrack
        visited[i + 1][j] = false;
    }
}

int main()
{

    int maze[3][3] = {{1, 0, 0},
                      {1, 1, 0},
                      {1, 1, 1}};

    if (maze[0][0] == 0)
    {
        cout << "No path exist" << endl;
    }
    else
    {

        int row = 3, col = 3;

        vector<vector<bool>> visited(row, vector<bool>(col, false));

        // jaha se suru hua i mean source ko true mark dete h kyu ki wahi toh starting point h toh wo visited toh hoga hi na
        visited[0][0] = true;

        // path ko store toh karenge
        vector<string> path;
        string output = "";

        // pahla zero is basically source ka x cordinate and second is y ka coordinate
        solveMaze(maze, row, col, 0, 0, visited, path, output);

        if (!path.size())
        {
            cout << "No path exists";
        }
        else
        {
            cout << "printing the results: ";
            for (auto i : path)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}