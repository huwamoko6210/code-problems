#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <tuple>
#include <functional>

using namespace std;

#define ll long long

ll a[200050] = {};
ll b[200050] = {};

int main() {
	ll n;
	ll no_1 = 0;
	ll no_2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}

	sort(b, b + n, greater<ll>());

	no_1 = b[0];
	no_2 = b[1];

	for (int i = 0; i < n; i++) {
		if (a[i] == no_1) {
			cout << no_2 << endl;
		}
		else {
			cout << no_1 << endl;
		}
	}
}
