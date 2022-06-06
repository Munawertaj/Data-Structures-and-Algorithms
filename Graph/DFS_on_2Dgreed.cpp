#include <bits/stdc++.h>
using namespace std;

bool vis[1001][1001];
int R, C;

bool isValid(int x, int y)
{
    if (x < 1 || x > R || y < 1 || y > C)
        return false;

    if (vis[x][y] == true)
        return false;

    return true;
}

void dfs(int x, int y)
{
    vis[x][y] = true;

    cout << x << " " << y << endl;

    if (isValid(x - 1, y))
        dfs(x - 1, y); // Up

    if (isValid(x, y + 1))
        dfs(x, y + 1); // Right

    if (isValid(x + 1, y))
        dfs(x + 1, y); // Down

    if (isValid(x, y - 1))
        dfs(x, y - 1); // left
}

int main()
{
    cin >> R >> C;
    dfs(1, 1);
}