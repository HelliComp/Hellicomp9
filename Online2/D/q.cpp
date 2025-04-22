#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, pos;
    cin >> n >> pos;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (pos == a)
            pos = b;
        else if (pos == b)
            pos = a;

        if (pos == c)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}