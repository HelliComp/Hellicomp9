#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> res;

    if (m % 2 == 1)
        res.push_back(m);

    for (int i = 1; i < m; i += 2)
    {
        res.push_back(i);
        res.push_back(i);
        res.push_back(i + 1);
        res.push_back(i);
        res.push_back(i + 1);
        res.push_back(i + 1);
    }

    if (m % 2 == 1)
    {
        res.push_back(m);
        res.push_back(m);
    }

    while (res.size() < n)
        res.push_back(1);

    if (res.size() > n)
    {
        cout << -1 << '\n';
    }
    else
    {
        for (int x : res)
            cout << x << ' ';
        cout << '\n';
    }

    return 0;
}