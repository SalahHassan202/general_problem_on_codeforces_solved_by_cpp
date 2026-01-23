// O. The best 3seer 2sab!

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const int N = (int)(1e5 + 5);

struct pr
{
    int v, l;
};

bool comp(pr a, pr b)
{
    return ((double)a.v / a.l) > ((double)b.v / b.l);
}

void solve()
{
    cout << fixed << setprecision(6);
    int n;
    int L;
    cin >> n >> L;
    pr arr[N] = {0};

    for (int i = 0; i < n; i++)
        cin >> arr[i].v >> arr[i].l;

    sort(arr, arr + n, comp);

    double score = 0;

    for (int i = 0; i < n && L != 0; i++)
    {
        if (L >= arr[i].l)
        {
            L -= arr[i].l;
            score += arr[i].v;
        }
        else
        {
            score += ((double)arr[i].v / arr[i].l) * L;
            L = 0;
        }
    }
    cout << score << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}