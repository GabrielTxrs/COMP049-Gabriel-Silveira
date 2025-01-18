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
#define forn(x, n)                                                             \
  cout << "[";                                                                 \
  for (auto i = 0; i < n - 1; i++) {                                           \
    cout << x[i] << ", ";                                                      \
  }                                                                            \
  cout << x[n - 1] << "]" << endl;

void countingSort(vector<int> A, vector<int> B, int k) {
  forn(A, k);
  vector<int> C(k+1, 0);

  for (int j = 0; j < k; j++) {
    C[A[j]] = C[A[j]] + 1;
    dbg(A[j]);
    dbg(C[A[j]]);
  }
  forn(C, k);
  for (int i = 0; i < k; i++) {
    C[i] = C[i] + C[i - 1];
    dbg(C[i]);
  }
  forn(C, k);
  for (int j = k-1; j > -1; j--) {
    B[C[A[j]]] = A[j];
    C[A[j]] = C[A[j]] - 1;
  }
  forn(A, k);
  forn(B, k);
  forn(C, k);
}

int main() {
  _ ll n;
  // cin >> n;
  vector<int> 
  A ={2, 5, 3, 0, 2, 3, 0, 3};
  // [0, 0, 2, 2, 3, 3, 3, 5]
  int k = A.size();
  vector<int> B(k+1, 0);
  countingSort(A, B, k);

  return 0;
}