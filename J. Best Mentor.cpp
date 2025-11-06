// J. Best Mentor

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{

    string id;
    cin >> id;
    ll n = id.size();
    bool ok = true;
    for (ll i = 0; i < n / 2; i++)
    {
        if (id[i] != id[n - 1 - i])
        {
            ok = false;
            break;
        }
    }

    ll sum = 0;
    for (char c : id)
    {
        sum += c - '0';
    }

    ll id_num = stoll(id); // string to long long
    bool div = false;
    if ((sum > 0) && (id_num % sum == 0))
        div = true;

    if (ok && div)
        cout << "Best mentor." << "\n";
    else if ((ok && !div) || (!ok && div))
        cout << "He's good." << "\n";
    else
        cout << "He'll be fired." << "\n";
}

int main()
{
    fast;

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}