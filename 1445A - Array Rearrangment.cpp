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
	int n, x; cin >> n >> x;
	std::vector<int> a(n), b(n);

	FOR(i, 0, n)
	{
		cin >> a[i];
	}
	FOR(i, 0, n) cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());

	FOR(i, 0, n)
	{
		if (a[i] + b[i] > x)
		{
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
}

int main()
{
	fastio();

	int t = 1; cin >> t;
	while (t--) solve();

	return 0;
}