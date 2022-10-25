#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define minvec(v) min_element(v.begin(), v.end())
#define maxvec(v) max_element(v.begin(), v.end())
#define vecin(v)       \
    for (auto &it : v) \
    cin >> it
#define vecout(v)    \
    for (auto i : v) \
    cout << i << " "
const int MN = 4e5 + 2;
ll arr[MN];

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vecin(a);
    vecin(b);
    ll cnt = 0, u = 0;
    for (int i = 0; i < n; i++)
    {
        u = abs(u - a[i]);
        if (b[i] <= u)
        {
            cnt++;
        }
        u = a[i];
    }
    cout << cnt << endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
