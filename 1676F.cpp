#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n], p = 0;
        sort(a, a + n);
        int c = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                c++;
                if (i == n - 2)
                {
                    if (c >= k)
                    {
                        b[p++] = a[i];
                    }
                    break;
                }
            }
            else
            {
                if (c >= k)
                {
                    b[p++] = a[i];
                }
                if (i == n - 2 && k == 1)
                {
                    b[p++] = a[i + 1];
                }
                c = 1;
            }
        }
        int count = 1, max = 0;
        int value1, value2;
        for (int i = 0; i < p - 1; i++)
        {
            if (abs(b[i] - b[i + 1]) == 1)
            {
                count++;
                if (i == p - 2)
                {
                    if (max < count)
                    {
                        max = count;
                        value2 = b[i + 1];
                        value1 = b[i + 1] - count + 1;
                    }
                }
            }
            else
            {
                if (max < count)
                {
                    max = count;
                    value2 = b[i];
                    value1 = b[i] - count + 1;
                }
                count = 1;
            }
        }
        if (n == 1 && k == 1)
        {
            cout << a[0] << " " << a[0] << endl;
        }
        else if (p == 1)
        {
            cout << b[0] << " " << b[0] << endl;
        }
        else if (p == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << value1 << " " << value2 << endl;
        }
    }
    return 0;
}