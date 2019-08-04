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

int main() {
	int n;
	int a[100050] = {};
	int b[100050] = {};
	ll ans = 0;

	cin >> n;
	for (int i = 0; i < n + 1; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		int left = min(a[i], b[i]);
		ans += left;
		a[i] -= left;
		b[i] -= left;

		int right = min(a[i + 1], b[i]);
		ans += right;
		a[i + 1] -= right;
		b[i] -= right;
	}

	cout << ans << endl;

}
