#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    if (n == 0 || m == 0)
    {
        cout << 1;
        return 0;
    }

    long long k;
    if (m >= n)
        k = 2 * m + n - 1;
    else
        k = 2 * n + m - 1;

    cout << k;
    return 0;
}