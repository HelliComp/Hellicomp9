#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> a(n + 1);
    vector<long long> dp(n + 1, 0);

    for (long long i = 1; i <= n; i++)
        cin >> a[i];

    vector<pair<long long, long long>> b;

    for (long long i = 1; i <= n; i++)
    {
        while (!b.empty() && b.back().first < a[i])
            b.pop_back();

        if (b.empty())
        {
            dp[i] = a[i] * i;
        }
        else
        {
            dp[i] = dp[b.back().second] + a[i] * (i - b.back().second);
        }

        b.push_back({a[i], i});
        cout << dp[i] + 1 << " ";
    }

    cout << '\n';
    return 0;
}