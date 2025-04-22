#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;

    int ans = -1;
    string s = "";
    bool check = false;

    for (int i = 0; i < n; i++)
    {
        int t, k;
        cin >> t >> k;

        if (t == 1)
            y += k;
        else
            y -= k;

        if (y < 0 && !check)
        {
            ans = i + 1;
            s = "Bache Ha";
            check = true;
        }
        if (y >= x && !check)
        {
            ans = i + 1;
            s = "Madam HashtPa";
            check = true;
        }
    }

    cout << ans << '\n';
    cout << s << '\n';

    return 0;
}