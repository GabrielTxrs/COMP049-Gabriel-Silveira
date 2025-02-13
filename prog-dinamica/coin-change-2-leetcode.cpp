#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define dbg(i) cout << #i << " = " << i << endl;
typedef long long ll;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int change(int amount, vector<int> &coins) {
  vector<int> dp(amount + 1, 0);
  dp[0] = 1;

  for (int c : coins) {
    for (int a = c; a <= amount; a++) {
      dp[a] += dp[a - c];
    }
  }

  return dp[amount];
}