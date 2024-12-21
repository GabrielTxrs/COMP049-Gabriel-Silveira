#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define dbg(i) cout << #i << " " << i << endl;
#define forn(n, x)                                                             \
  cout << "[";                                                                 \
  for (auto i = 0; i < n - 1; i++) {                                           \
    cout << x[i] << ", ";                                                      \
  }                                                                            \
  cout << x[n - 1] << "]" << endl;

int main() {
  while (true) {

    ll numero_de_carros, vagas;
    cin >> numero_de_carros >> vagas;

    if (numero_de_carros == 0 && vagas == 0)
      return 0;

    stack<pair<ll, ll>> pilha;
    for (size_t i = 0; i < numero_de_carros; i++) {
      ll entrada, saida;
      cin >> entrada >> saida;

      if (pilha.empty()) {
        pilha.push({entrada, saida});
        continue;
      }

      if (entrada > pilha.top().first) {

        if (pilha.size() < vagas) {
          if (pilha.top().second < entrada)
            pilha.push({entrada, saida});
        } else {
        }
      }
    }
  }
  return 0;
}