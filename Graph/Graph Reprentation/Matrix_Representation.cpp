#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cout << "Enter number of nodes:";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> e;
    bool mat[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
            mat[i][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        mat[x][y] = 1;
        mat[y][x] = 1;
    }
    cout << "The Adjacency Matrix is:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}