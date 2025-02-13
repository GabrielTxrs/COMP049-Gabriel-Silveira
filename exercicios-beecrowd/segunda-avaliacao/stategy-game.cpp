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

#define MAX 25
int main() {
  _ ll j, r;
  cin >> j >> r;
  vector<int> jogador(j, 0);
  cin.ignore();

  string line;
  getline(cin, line);
  stringstream ss(line);

  ll pontos;
  ll i = 0;
  while (ss >> pontos) {
    jogador[i % j] += pontos;
    i++;
  }

  ll winner = 1;
  ll maior = 0;
  for (int i = 0; i < j; i++) {
    if (jogador[i] >= maior) {
      maior = jogador[i];
      winner = i + 1;
    }
  }

  cout << winner << endl;
  return 0;
}