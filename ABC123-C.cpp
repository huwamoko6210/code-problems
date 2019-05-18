#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long

ll a[4] = {};
int main() {
	ll ans = 5;
	ll min = 0;
	ll n;
	cin >> n;
	
	for (ll i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	sort(a, a + 5);
	if (n > a[0]) {
		if (a[0] == 1) {
			ans = 4;
			min = n / a[0];
		}
		min = n / a[0];
	}

	cout << ans + min << endl;
}
