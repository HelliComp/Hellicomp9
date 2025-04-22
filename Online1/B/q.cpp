#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cnt += a % 2;
    }

    if (cnt % 2 == 1)
        cout << "Odd" << '\n';
    else
        cout << "Even" << '\n';

    return 0;
}