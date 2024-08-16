#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;
using vs = vector<string>;

ll n;
vs names;
vl costs;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  names = vs(n);
  costs = vl(n);

  auto jc = ll{0};
  for (auto i = 0; i < n; ++i) {
    cin >> names[i] >> costs[i];
    if (names[i] == "jinju") {
      jc = costs[i];
    }
  }

  auto ans = ll{0};
  for (const auto& x : costs) {
    if (jc < x) {
      ++ans;
    }
  }

  cout << jc << '\n' << ans;

  return 0;
}