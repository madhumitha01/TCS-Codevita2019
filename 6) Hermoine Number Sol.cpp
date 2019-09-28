#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll fact[100005];
int main()
{
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 1; i < 100005; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    ll n;
    cin >> n;
    vector<ll> a;
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll mul = 1;
        for (ll i = l; i <= r; i++)
        {
            mul = (mul * fact[a[i-1]]) % MOD;
        }

        ll ans = 1;
        for (ll i = 0; i < r - l; i++)
        {
            ans = (ans * mul) % MOD;
        }
        cout << ans <<endl;     
      
    }

    return 0;
}
