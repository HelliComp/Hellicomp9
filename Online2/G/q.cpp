#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;
using pii = pair<ll, ll>;

const ll INF = 1e18;

void Merge(vector<pii> &vec)
{
    sort(vec.begin(), vec.end());
    vector<pii> res;
    res.push_back(vec[0]);
    for (size_t i = 1; i < vec.size(); ++i)
    {
        if (vec[i].first <= res.back().second)
        {
            res.back().second = max(res.back().second, vec[i].second);
        }
        else
        {
            res.push_back(vec[i]);
        }
    }
    vec = res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    ll d;
    cin >> n >> d;

    vector<pii> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }

    Merge(vec);
    n = vec.size();

    ll ans = 0;
    ll prv = -INF;

    for (int i = 0; i < n; i++)
    {
        vec[i].first = max(vec[i].first, prv + d);
        ll temp = (vec[i].second - vec[i].first + d) / d;
        ans += temp;
        prv = vec[i].first + (temp - 1) * d;
    }

    cout << ans << '\n';
    return 0;
}