// A. Sir.73

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

// "Initiate Reader" = 1
// "Comprehensive Reader" = 3
// "Avid Reader" = 5
// "Bronze Reader" = 10
// "Silver Reader" = 15
// "Gold Reader" = 20
// "Diamond Reader" = 30
// "Platinum Reader" = 50
// "Gladiator of Words" = 75
// "Wizard of Words" = 100

////////////////////////////////////////////////
////////////////////////////////////////////////

// Initiate Reader

// Requires ≥ 1 books
// Comprehensive Reader

// Requires ≥ 3 books
// Avid Reader

// Requires ≥ 5 books
// Bronze Reader

// Requires ≥ 10 books
// Silver Reader

// Requires ≥ 15 books
// Gold Reader

// Requires ≥ 20 books
// Diamond Reader

// Requires ≥ 30 books
// Platinum Reader

// Requires ≥ 50 books
// Gladiator of Words

// Requires ≥ 75 books
// Wizard of Words

// Requires ≥ 100 books

void solve()
{
    ll n;
    cin >> n;

    if (n >= 100)
        cout << "Wizard of Words" << endl;
    else if (n >= 75)
        cout << "Gladiator of Words" << endl;
    else if (n >= 50)
        cout << "Platinum Reader" << endl;
    else if (n >= 30)
        cout << "Diamond Reader" << endl;
    else if (n >= 20)
        cout << "Gold Reader" << endl;
    else if (n >= 15)
        cout << "Silver Reader" << endl;
    else if (n >= 10)
        cout << "Bronze Reader" << endl;
    else if (n >= 5)
        cout << "Avid Reader" << endl;
    else if (n >= 3)
        cout << "Comprehensive Reader" << endl;
    else if (n >= 1)
        cout << "Initiate Reader" << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}