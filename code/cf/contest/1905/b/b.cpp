#include <cstring>
#include <iostream>
using namespace std;
const int MAXN = 2e5+2;
int n;
int degree[MAXN];
void solve();
int main() {
  int T; cin >> T; while (T--) solve();
}

void solve() {
  cin >> n;
  memset(degree, 0, sizeof(degree));
  for (int i = 1; i < n; i ++) {
    int u, v;
    cin >> u >> v;
    degree[u] ++;
    degree[v] ++;
  }
  int cnt = 0;
  for (int i = 1; i <= n; i ++) {
    if (degree[i] == 1) {
      cnt++;
    }
  }
  cout << (cnt + 1) / 2 << endl;
}