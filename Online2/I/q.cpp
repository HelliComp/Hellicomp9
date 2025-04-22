#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long INF = 8e18;
const int MAXN = 1e6 + 10;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<long long> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        A[i] -= 1LL * i * k;
    }

    vector<long long> dp(MAXN, INF);
    dp[0] = -INF;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int ind = upper_bound(dp.begin(), dp.end(), A[i]) - dp.begin();
        dp[ind] = A[i];
        ans = max(ans, ind);
    }

    cout << n - ans << '\n';
    return 0;
}