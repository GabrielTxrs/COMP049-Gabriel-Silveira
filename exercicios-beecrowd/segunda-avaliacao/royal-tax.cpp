#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define dbg(i) cout << #i << " = " << i << endl;
typedef long long ll;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define forn(x, n)                                                             \
  cout << #x << "[";                                                           \
  for (auto i = 0; i < n - 1; i++) {                                           \
    cout << x[i] << ", ";                                                      \
  }                                                                            \
  cout << x[n - 1] << "]" << endl;

#define MAXN 10001
#define id first
#define dist second

ll nCidades, capMax;
vector<int> taxa(MAXN, 0);
vector<pair<int, int>> grafo[MAXN];
vector<bool> visitado(MAXN, false);

int dfs(ll &dist, pair<int, int> u = {1, 0}) {
  visitado[u.id] = true;

  for (auto &v : grafo[u.id])
    if (!visitado[v.id])
      taxa[u.id] += dfs(dist, v);

  int viagens = 2 * ((taxa[u.id] + capMax - 1) / capMax);
  dist += u.dist * viagens;

  return taxa[u.id];
}

int main() {

  cin >> nCidades >> capMax;

  for (int i = 1; i <= nCidades; i++)
    cin >> taxa[i];

  for (int i = 0; i < nCidades; i++) {
    ll u, v, c;
    cin >> u >> v >> c;
    grafo[u].push_back({v, c});
    grafo[v].push_back({u, c});
  }

  ll dist = 0;
  dfs(dist);

  cout << dist << "\n";
}