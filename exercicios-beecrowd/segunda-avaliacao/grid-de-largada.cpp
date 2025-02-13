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

  _ ll n, i, j;
  int chegada[MAX];
  int largada[MAX];
  int final[MAX];

  while (cin >> n) {
    for (i = 0; i < n; ++i)
      cin >> largada[i];

    for (i = 0; i < n; ++i)
      cin >> chegada[i];

    for (i = 0; i < n; ++i)
      for (j = 0; j < n; ++j)
        if (largada[i] == chegada[j]) {
          final[j] = i + 1;
          break;
        }

    int ultrapassagens = 0;
    for (i = 0; i < n; ++i)
      for (j = i + 1; j < n; ++j)
        if (final[i] > final[j]) {

          int temp = final[i];
          final[i] = final[j];
          final[j] = temp;
          ++ultrapassagens;
        }

    cout << ultrapassagens << endl;
  }
}