#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cout << 1 + (n-1)*4 + (n-1)*(n-2)*2 << '\n';
	}
}