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

bool is_prime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void prime_factor(int num)
{
    vector<int> prime;
    for (int i = 2; i * i <= num; i++)
    {
        while (num % i == 0)
        {
            prime.push_back(i);
            num = num / i;
        }
    }
    if (num > 1)
        prime.push_back(num);

    for (int i = 0; i < prime.size(); i++)
    {
        cout << prime[i] << "  ";
    }
    cout << nl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;
    prime_factor(num);
    return 0;
}