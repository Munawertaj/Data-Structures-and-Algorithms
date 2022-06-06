#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cout << "Enter number of nodes:";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> e;
    vector<int> v[n + 1];
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "v[" << i << "]= ";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}