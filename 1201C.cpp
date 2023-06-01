#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long int sum = 0;
    long long int c = 0;
    long long int i;
    for (i = (n / 2); i < n; i++)
    {
        c++;
        sum += a[i];
        if ((sum + k) / c <= a[i + 1])
        {
            break;
        }
    }
    cout << (sum + k) / c << endl;
}