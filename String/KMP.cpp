#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define nl "\n"
#define FOR(x, y) for (ll i = x; i <= y; i++)
#define f0(x) for (ll i = 0; i <= x; i++)
#define f1(x) for (ll i = 1; i <= x; i++)
#define pb(x) push_back(x)
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
#define matrix(x) vector<vector<x>>
#define vss vector<string>
#define PI (2 * acos(0.0))
#define sqr(x) ((x) * (x))
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define sff(a, b) scanf("%d %d", &a, &b)
#define sffl(a, b) scanf("%lld %lld", &a, &b)
#define sfff(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sfffl(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define ms(a, b) memset(a, b, sizeof(a))
#define ff first
#define ss second
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define all(a) a.begin(), a.end()
#define readfile freopen("input.txt", "r", stdin);
#define writefile freopen("output.txt", "w", stdout);
#define mx 104
#define inf (ll)1e17
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
using namespace std;

void computeLPS(string pat, int lps[], int l)
{
    int i = 1, count = 0;
    lps[0] = 0;
    while (i <= l)
    {
        if (pat[i] == pat[count])
        {
            count++;
            lps[i] = count;
            i++;
        }
        else
        {
            if (count != 0)
                count = lps[count - 1];
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void show(int lps[], int len)
{
    for (int i = 0; i < len; i++)
        printf("LPS[%d] = %d\n", i, lps[i]);
}

void KMP()
{
    // cin.ignore();
    string str, pattern;
    getline(cin, pattern);
    getline(cin, str);

    int len = pattern.size();
    // cout << len << nl;
    int lps[len];
    computeLPS(pattern, lps, len);
    show(lps, len);

    int i = 0, j = 0, count = 0;
    while (i <= str.size())
    {
        if (str[i] == pattern[j])
        {
            j++;
            i++;
        }
        else
        {
            if (j != 0)
                j = lps[j - 1];
            else // j=0
                i++;
        }
        if (j == len)
            count++;
    }
    if (count)
        cout << "Pattern is found " << count << " times";
    else
        cout << "Pattern is not found";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    KMP();
    return 0;
}