#include <iostream>
using namespace std;
int n, m;
void solve();
int main() {
  int T; cin >> T; while (T--) solve();
}

void solve() {
  cin >> n >> m;
  cout << max(n, m) << endl;
}