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

int changeMaking(vector<int> &moedas, int troco) {
  // Esta tabela armazenará a resposta para nossos subproblemas
  vector<int> dp(troco + 1, troco + 1);

  dp[0] = 0;
  int m = moedas.size();
  // Resolver cada subproblema de 1 até troco
  for (int i = 1; i <= troco; i++) {
    for (int j = 0; j < m; j++) {
      if (i >= moedas[j]) {
        dp[i] = min(dp[i - moedas[j]] + 1, dp[i]);
      }
    }
  }

  /*
    dp[troco] tem nossa resposta. Se não tivermos uma resposta, então
    dp[troco] será troco + 1 e, portanto, dp[troco] > troco será verdadeiro.
    Então retornamos -1.

    Caso contrário, dp[troco] contém a resposta
  */
  return dp[troco] > troco ? -1 : dp[troco];
}

int main() {
  _ ll n;

  vector<int> D = {1, 5, 12, 25};
  n = 16;
  forn(D, D.size());
  dbg(n);
  cout << changeMaking(D, n) << endl;
}