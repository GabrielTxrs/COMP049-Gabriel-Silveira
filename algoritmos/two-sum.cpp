#include <bits/stdc++.h>
#include <functional>
#include <iostream>
#include <unordered_map>
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

vector<int> twoSum(vector<int> nums, int target) {
  vector<int> resultado;
  int diff;
  unordered_map<int, int> seen;
  for (int i; i < nums.size(); i++) {
    dbg(i);
    diff = target - nums[i];
    dbg(diff);
    // seen.
    if (seen.find(diff) != seen.end()) {
      resultado = {seen[diff], i};
      // resultado.push_back(seen[diff]); resultado.push_back(i);
      forn(resultado.size(), resultado);
      return resultado;
    }
    // seen[nums[i]] = i;
    seen.insert(make_pair(nums[i], i));
  }
  return resultado;
}

int main() {
  _ ll n;

  vector<int> nums1 = {3, 2, 4};
  int target1 = 9;
  vector<int> nums2 = {2, 7, 11, 15};
  int target2 = 6;
  vector<int> nums3 = {3, 3};
  int target3 = 6;

  vector<int> resultado = twoSum(nums1, target1);
  forn(resultado.size(), resultado);

  return 0;
}