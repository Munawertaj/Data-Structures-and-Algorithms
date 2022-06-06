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

int kadane(int arr[], int n)
{
    int maximum_sum = arr[1];
    int sum = 0, st = 1, end;

    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum > maximum_sum)
        {
            maximum_sum = sum;
            end = i;
        }
    }
    return maximum_sum;
}
void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    cout << "Maximum sum:" << kadane(arr, n) << nl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int tc;
    // cin>>tc;
    // while(tc--){
    //     solve();
    // }
    solve();
    return 0;
}