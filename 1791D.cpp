#include <iostream>
#include <map>
#define ll long long int
#define ld long double
#define N endl
using namespace std;

void anon()
{

    ll n;
    cin >> n;
    char s[n + 1];
    cin >> s;
    ll a[n];
    a[n - 1] = 0;
    ll b[n];
    b[0] = 0;
    ll maxi = 0;
    map<char, int> y;
    for (ll i = 0; i < n - 1; i++)
    {
        y[s[i]]++;
        a[i] = y.size();
    }
    map<char, int> z;
    for (ll i = n - 1; i > 0; i--)
    {
        z[s[i]]++;
        b[i] = z.size();
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] + b[i + 1] > maxi)
        {
            maxi = a[i] + b[i + 1];
        }
    }
    cout << maxi << N;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        anon();
    }
}