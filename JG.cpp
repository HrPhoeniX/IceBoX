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
    int n;
    cin >> n;
    vector<int> v;
    if (n == 1)
    {
        cout << 3 << endl;
    }
    else if (n == 2)
    {
        cout << 15 << endl;
    }
    else
    {
        v.pb(1);
        for (int i = 1; i <= n - 2; i++)
        {
            v.pb(0);
        }
        v.pb(5);
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
    }
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
