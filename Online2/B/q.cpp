#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int a, b;
    cin >> a;

    for (int i = 2; i <= n; i++)
    {
        cin >> b;
        if (abs(b - a) > k)
        {
            cout << i << '\n';
            return 0;
        }
        a = b;
    }

    return 0;
}