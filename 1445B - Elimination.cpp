#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll mod = 1000000007;

#define FOR(i, s, e) for (ll i = s; i < e; i++)
#define FOr(i, s, e) for (ll i = s; i >= e; i--)

#define PI acos(-1)


void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


void solve()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int x = a + b;
	int y = c + d;

	cout << max(x, y) << '\n';
}


int main()
{
	fastio();

	int t = 1; cin >> t;
	while (t--) solve();

	return 0;
}