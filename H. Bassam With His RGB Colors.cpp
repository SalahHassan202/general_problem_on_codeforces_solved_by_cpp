// H. Bassam With His RGB Colors

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll R = -1, G = -1, B = -1;
    string k;
    char s;
    ll n;

    for (int i = 0; i < 3; i++)
    {
        cin >> k >> s >> n;
        if (k == "Red")
            R = n;
        else if (k == "Green")
            G = n;
        else if (k == "Blue")
            B = n;
    }

    if (R == -1 || G == -1 || B == -1)
    {
        cout << "impossible" << endl;
        return;
    }

    if (R == 0 && G == 0 && B == 0)
        cout << "Black" << endl;
    else if (R == 255 && G == 255 && B == 255)
        cout << "White" << endl;
    else if (R == 224 && G == 224 && B == 224)
        cout << "Light Gray" << endl;
    else if (R == 128 && G == 128 && B == 128)
        cout << "Gray" << endl;
    else if (R == 64 && G == 64 && B == 64)
        cout << "Dark Gray" << endl;
    else if (R == 255 && G == 0 && B == 0)
        cout << "Red" << endl;
    else if (R == 255 && G == 96 && B == 208)
        cout << "Pink" << endl;
    else if (R == 160 && G == 32 && B == 255)
        cout << "Purple" << endl;
    else
        cout << "impossible" << endl;
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}