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

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> hash;
  for (int i = 0; i < nums.size(); i++) {
    hash[nums[i]] = i;
  }
  for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (hash.find(complement) != hash.end() && hash[complement] != i) {
      return {i, hash[complement]};
    }
  }
  return {};
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