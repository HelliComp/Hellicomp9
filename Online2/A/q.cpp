#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a != c || b != d)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

    return 0;
}