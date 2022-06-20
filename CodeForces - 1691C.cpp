#include<bits/stdc++.h>
using namespace std;
int main()
{

	long long t;
	ios::sync_with_stdio(false);

	cin >> t;
	while (t--)
	{
		long long n, m, ans = 0, sum = 0;
		cin >> n >> m;
		string s;
		cin >> s;
		long long x = 0, y = 0;
		for (long long i = 0; i < n; i++)
		{
			if (s[i] == '1' && x == 0)
				x = i + 1;
			if (s[i] == '1')
			{
				y = i + 1;
				ans += 11;
				sum++;
			}
		}
		if (sum && n - y <= m) ans -= 11, ans++, sum--, m -= (n - y);


		if (sum && x - 1 <= m) ans -= 1;
		cout << ans << endl;
	}
	return 0;
}

