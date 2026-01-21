// E. Highest Y

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

struct Point
{
    int x, y;
};

bool comp(Point &a, Point &b)
{
    return a.y > b.y;
}

void solve()
{
    int n;
    cin >> n;

    Point points[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> points[i].x >> points[i].y;
    }

    sort(points, points + n, comp);

    for (Point p : points)
    {
        cout << p.x << " " << p.y << '\n';
    }
}
int main()
{
    fast;

    solve();

    return 0;
}
