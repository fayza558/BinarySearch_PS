
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        vector<pair<int, int>> v;

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            if (arr[i] < i) {
                v.push_back({arr[i], i});
            }
        }

        sort(v.begin(), v.end());
        long long ans = 0;

        for (auto [x, y] : v) {
            int s = upper_bound(v.begin(), v.end(), make_pair(y, (int)1e9)) - v.begin();
            ans += v.size() - s;
        }

        cout << ans << endl;
    }
    return 0;
}

