#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<long double, vector<long double>, greater<long double>> pq;

    for (int i = 0; i < n; i++)
    {
        long double x;
        cin >> x;
        pq.push(x);
    }

    while (pq.size() > 1)
    {
        long double a = pq.top();
        pq.pop();
        long double b = pq.top();
        pq.pop();
        long double m = (a + b) / 2.0;
        pq.push(m);
    }

    long double ans = pq.top();
    cout << ans;

    return 0;
}