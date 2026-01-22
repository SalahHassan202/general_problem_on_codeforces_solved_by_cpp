// N. Sort Rectangles

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

struct pr
{
    int id;
    long long area;
};

bool comp(pr a, pr b)
{
    return a.area < b.area;
}

void solve()
{
    int n;
    cin >> n;

    vector<pr> arr(n);

    for (int i = 0; i < n; i++)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        int minX = min({x1, x2, x3, x4});
        int maxX = max({x1, x2, x3, x4});
        int minY = min({y1, y2, y3, y4});
        int maxY = max({y1, y2, y3, y4});

        long long area = 1LL * (maxX - minX) * (maxY - minY);

        arr[i] = {i + 1, area};
    }

    sort(arr.begin(), arr.end(), comp);

    for (auto &r : arr)
    {
        cout << r.id << " " << r.area << "\n";
    }
}

int main()
{
    fast;

    solve();

    return 0;
}