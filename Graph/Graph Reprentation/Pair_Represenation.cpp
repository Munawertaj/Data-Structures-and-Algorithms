#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cout << "Enter number of nodes:";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> e;
    pair<int, int> p[e + 1];
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        p[i] = {x, y};
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "Node" << i << " is connected with Nodes = ";
        for (int j = 1; j <= n; j++)
        {
            if (p[j].first == i)
                cout << p[j].second << "  ";
            else if (p[j].second == i)
                cout << p[j].first << "  ";
            else
                continue;
        }
        cout << endl;
    }
    return 0;
}