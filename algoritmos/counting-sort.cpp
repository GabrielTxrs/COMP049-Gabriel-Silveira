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

void countingSort(vector<int> A, vector<int> B, int k) {
  vector<int> C[k];
  for (int i = 0; i < k; i++)
    C.insert(i, 0);
  for (int j = 1; j <= A.size(); j++)
    C[A[j]] = C[A[j]] + 1
}

int main() {
  _ ll n;
  cin >> n;

  return 0;
}