/*
Ho va ten: Nguyen Hoang Nam
MSSV: 20225213
Ma lop: 738920
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0, sum = 0;
    while (n--) {
        int k, t;
        cin >> k >> t;
        vector<int> a(k);
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }
        if (t == 1) {
            for (int i = 0; i < k; ++i) {
                sum += a[i];
            }
        } else if (t == -1) {
            for (int i = 0; i < k; ++i) {
                sum -= a[i];
            }
        }
        ans = max(ans, -sum);
    }
    cout << ans;
    return 0;
}
