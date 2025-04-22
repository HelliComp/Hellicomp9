#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int h1 = (s[0] - '0') * 10 + (s[1] - '0');
    int m1 = (s[3] - '0') * 10 + (s[4] - '0');
    int sec1 = (s[6] - '0') * 10 + (s[7] - '0');
    int start = h1 * 3600 + m1 * 60 + sec1;

    int h2 = (t[0] - '0') * 10 + (t[1] - '0');
    int m2 = (t[3] - '0') * 10 + (t[4] - '0');
    int sec2 = (t[6] - '0') * 10 + (t[7] - '0');
    int endt = h2 * 3600 + m2 * 60 + sec2;

    int ans = 0;
    for (int cur = start; cur <= endt; ++cur)
    {
        int h = cur / 3600;
        int m = (cur % 3600) / 60;
        int s_ = cur % 60;

        bool seen[10] = {false};
        int digits[6] = {
            h / 10, h % 10,
            m / 10, m % 10,
            s_ / 10, s_ % 10};

        bool unique = true;
        for (int i = 0; i < 6; ++i)
        {
            if (seen[digits[i]])
            {
                unique = false;
                break;
            }
            seen[digits[i]] = true;
        }

        if (unique)
            ans++;
    }

    cout << ans << '\n';
    return 0;
}