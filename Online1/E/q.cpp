#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        if (a[i + 1] < a[i])
            x = a[i];

    vector<int> res;
    for (int i = 0; i < n; i++)
        if (a[i] != x)
            res.push_back(a[i]);

    if (res.empty())
        cout << -1;
    else
        for (int val : res)
            cout << val << " ";

    cout << '\n';

    return 0;
}