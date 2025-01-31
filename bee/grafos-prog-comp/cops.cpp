#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
#define _                         \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);

int const N = 1e4 + 1;
int n, m;
bool vis[N], in[N], res;
vector<vector<int>> g;

void DFS(int node)
{
	vis[node] = true;
	in[node] = true;

	for (int i = 0; i < (int)g[node].size(); ++i)
	{
		if (in[g[node][i]])
			res = true;

		if (!vis[g[node][i]])
			DFS(g[node][i]);
	}

	in[node] = false;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t-- != 0)
	{
		scanf("%d %d", &n, &m);

		g.clear();
		g.resize(n);

		for (int i = 0, a, b; i < m; ++i)
		{
			scanf("%d %d", &a, &b);
			--a, --b;
			g[a].push_back(b);
		}

		memset(vis, false, sizeof vis);
		memset(in, false, sizeof in);
		res = false;
		for (int i = 0; i < n; ++i)
			if (!vis[i])
				DFS(i);

		if (res)
			puts("SIM");
		else
			puts("NAO");
	}

	return 0;
}