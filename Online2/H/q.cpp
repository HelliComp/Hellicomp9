#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> p(n);
    for (auto &v : p)
        cin >> v;

    const int INF = 1e9;
    bool rev = (n == 2 || p[0] - 1 == p[1] || p[1] - 1 == p[2]);
    int ind = find(p.begin(), p.end(), 1) - p.begin();

    vector<vector<int>> dist(2, vector<int>(n, INF));
    queue<pair<int, int>> que;
    dist[rev][ind] = 0;
    que.emplace(rev, ind);

    auto update = [&](int r, int i, int val)
    {
        if (dist[r][i] <= val)
            return;
        dist[r][i] = val;
        que.emplace(r, i);
    };

    while (!que.empty())
    {
        auto [r, i] = que.front();
        que.pop();

        update(r, (i + n - 1) % n, dist[r][i] + 1);
        update(!r, n - 1 - i, dist[r][i] + 1);
    }

    cout << dist[0][0] << '\n';
    return 0;
}