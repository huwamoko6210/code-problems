
#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>
#include<set>
//#include<boost/math/common_factor_rt.hpp>
#include <numeric>
using namespace std;

#define ll long long
#define INF 1000000007;

ll a[100050] = {};

int main() {
	ll n;
	ll cnt = 0;
	cin >> n;

	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		if (x < 0) {
			cnt++;
			x *= -1;
		}
		a[i] = x;

	}

	if (cnt % 2 == 0) {
		ll ans = 0;
		for (ll i = 0; i < n; i++)
		{
			ans += a[i];
		}

		cout << ans;
	}
	else {
		sort(a, a + n);

		ll ans = 0;
		for (ll i = 1; i < n; i++)
		{
			ans += a[i];
		}

		cout << ans - a[0];
	}
}

