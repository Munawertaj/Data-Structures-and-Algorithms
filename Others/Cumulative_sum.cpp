#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
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
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define INF (ll)1e17
#define nl endl
#define N 100005
using namespace std;

ll sum[N];

void cumulative_sum(ll arr[], ll n)
{
    sum[1] = arr[1];
    for (ll i = 2; i <= n; i++)
    {
        sum[i] = arr[i] + sum[i - 1];
    }
}

void print(ll n)
{
    for (ll i = 1; i <= n; i++)
        cout << sum[i] << " ";

    cout << nl;
}

void solve()
{
    int n;
    // cout << "Enter number of total elements:";
    cin >> n;
    ll arr[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cumulative_sum(arr, n);
    // print(n);

    ll st, end;
    cin >> st >> end;

    ll result = sum[end] - sum[st - 1];

    cout << result << nl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}