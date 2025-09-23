#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int x, y, z;
	cin >> x >> y;
	vector<vector<int>> v(x, vector<int>(x, 0));
	for (int i = 0; i < x; i++)
	{
		cin >> z;
		v[i][0] = i == 0 ? z : z + v[i - 1][0];
		// cout << v[i][0] << " ";
		for (int j = 1; j < x; j++)
		{
			cin >> z;
			v[i][j] = i == 0 ? z + v[i][j - 1] : z + v[i][j - 1] + v[i - 1][j] - v[i - 1][j - 1];
			// cout << v[i][j] << " ";
		}
		// cout << endl;
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << v[min(i + y, x - 1)][min(j + y, x - 1)] - (j - y > 0) * v[min(i + y, x - 1)][max(j - y - 1, 0)] - (i - y > 0) * v[max(i - y - 1, 0)][min(j + y, x - 1)] + (i - y > 0) * (j - y > 0) * v[max(i - y - 1, 0)][max(j - y - 1, 0)] << " ";
		}
		cout << endl;
	}
}

