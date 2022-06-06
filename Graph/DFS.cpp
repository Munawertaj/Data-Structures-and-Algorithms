#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb(x) push_back(x)
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
#define vss vector<string>
#define matrix(x) vector<vector<x>>
#define ff first
#define ss second
#define ms(a, b) memset(a, b, sizeof(a))
#define PI (2 * acos(0.0))
#define INF (ll)1e17
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
    // Take action on vertex after entering the vertex
    /* if you want to check in this portion vertex is visted or not  then
            if (vis[vertex])
                return;
    */
    cout << "Vertex = " << vertex << endl;
    vis[vertex] = true;
    for (auto child : g[vertex])
    {
        // Take action on child before entering the child node

        cout << "Parent = " << vertex << " and Child = " << child << endl;
        // Checking in this portion vertex is visted or not
        if (vis[child])
            continue;

        dfs(child);
        // Take action on child after entering the child node
    }
    // Take action on vertex before exiting the vertex
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Number of nodes and edges
    int node, edge;
    cin >> node >> edge;
    // taking input
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    int start; // starting node
    cin >> start;
    dfs(start);

    return 0;
}