#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    long long ans = 0;

    for (long long i = 0; i < n; i++)
    {
        vector<int> v;
        bool ok = false;

        for (int j = 0; j < 8; j++)
        {
            char c;
            cin >> c;

            int a = (c == 'a') ? 1 : 0;

            if (!v.empty() && v.back() == 1 && a == 1)
                ok = true;

            v.push_back(a);
        }

        int sum = 0;
        for (int x : v)
            sum += x;

        if (sum >= 4)
            ok = true;

        ans += ok;
    }

    cout << ans << '\n';
    return 0;
}