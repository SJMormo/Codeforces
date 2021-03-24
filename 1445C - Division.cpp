#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const ll mod = 1000000007;

#define FOR(i, s, e) for (ll i = s; i < e; i++)
#define FOr(i, s, e) for (int i = s; i >= e; i--)

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

std::vector<ll> pf;

void primeFactors(ll n)
{
	if (n % 2 == 0)
	{
		pf.push_back(2);
		while (n % 2 == 0)
			n = n / 2;
	}

	for (ll i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0)
		{
			pf.push_back(i);
			while (n % i == 0)
				n = n / i;
		}
	}


	if (n > 2) pf.push_back(n);
}

void solve()
{
	ll p, q;
	cin >> p >> q;

	if (p % q != 0)
	{
		cout << p << '\n';
		return;
	}

	pf.clear();
	primeFactors(q);

	ll ans = 1;
	for (auto it : pf)
	{
		ll tmp = p;

		while (tmp % it == 0) {
			tmp /= it;
			if (tmp % q != 0)
			{
				ans = max(ans, tmp);
				break;
			}
		}
	}
	cout << ans << '\n';
}

int main()
{
	fastio();

	int t = 1; cin >> t;
	while (t--) solve();

	return 0;
}