#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> A(n), B(m);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];

    sort(A.begin(), A.end());

    long long t = 0;
    for (int i = 0; i < m; i++)
    {
        long long less = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        long long greater = A.end() - upper_bound(A.begin(), A.end(), B[i]);
        t += less * greater;
    }

    cout << t << '\n';
    return 0;
}