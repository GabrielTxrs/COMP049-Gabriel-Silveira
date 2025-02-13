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

vector<int> countingSort(vector<int> A, int k) {
  int max = A[0];
  for (int i = 0; i < k; i++) {
    if (max < A[i]) {
      max = A[i];
    }
    continue;
  }
  vector<int> count(max + 1, 0);

  for (int j = 0; j < k; j++)
    count[A[j]]++;

  for (int i = 1; i <= max; i++)
    count[i] += count[i - 1];

  vector<int> arrayOrd(k);
  for (int j = k - 1; j > -1; j--) {
    arrayOrd[count[A[j]] - 1] = A[j];
    count[A[j]]--;
  }
  return arrayOrd;
}

int main() {
  _ ll n;
  vector<int> A = {2, 5, 3, 0, 2, 3, 0, 3};
  //              [0, 0, 2, 2, 3, 3, 3, 5]
  int k = A.size();

  vector<int> arrayOrd = countingSort(A, k);
  forn(arrayOrd, k);
  return 0;
}