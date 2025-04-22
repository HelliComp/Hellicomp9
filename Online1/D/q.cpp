#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<pair<char, int>> vec;
    string res;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || s[i] != s[i - 1])
            vec.push_back({s[i], 1});
        else
            vec.back().second++;
    }

    for (auto p : vec)
    {
        if (p.second == 1)
            res += p.first;
        else
            res += p.first + to_string(p.second);
    }

    if (res.size() < n)
        cout << res << '\n';
    else
        cout << s << '\n';

    return 0;
}