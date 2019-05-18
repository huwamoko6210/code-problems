#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <functional>
#include <stack>
#include <set>

using namespace std;

#define ll long long

int v[25] = {};
int c[25] = {};

int main() {
	int n;
	int ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (v[i] - c[i] > 0) {
			ans += v[i] - c[i];
		}
	}

	cout << ans << endl;
	

}
