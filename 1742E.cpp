#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        long long int sum = 0;
        vector<long long int> c;
        vector<pair<int, int> > p;
        int a[n];
        int b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> b;
            p.push_back(make_pair(b,i));
        }
        sort(p.begin(), p.end());
        int z = 0;
        for (int k = 0; k < q; k++)
        {
            for (z = z; z < n; z++)
            {
                if (p[k].first >= a[z])
                {
                    sum += a[z];
                }
                else
                {
                    break;
                }
            }
            c.push_back(sum);
        }
        vector<pair<int, int> > p2;
        for (int i = 0; i < q; i++)
        {
            p2.push_back(make_pair(p[i].second, i));
        }
        sort(p2.begin(), p2.end());
        for (int i = 0; i < q; i++)
        {

            cout << c[p2[i].second] << " ";
        }
        cout << endl;
    }
}