#include <stdio.h>
#include <string.h>

typedef struct{
    int x;
    int y;
} pair;

int comp(pair *a, pair *b){
    if (a->x == b->x)
        return a->y - b->y;
    return a->x - b->x;
}

int t, n, i, ai, bi;
long long ans;
pair p[200010];
int cnt[200010];

int main(){
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        for (i = 0; i < n; i++) scanf("%d", &p[i].x);
        for (i = 0; i < n; i++) scanf("%d", &p[i].y);
        qsort(p, n, sizeof(pair), comp);
        ans = 0;
        for (ai = 1; ai * ai <= 2 * n; ai++){
            memset(cnt, 0, sizeof(int) * (n + 1));
            for (i = 0; i < n; i++){
                bi = p[i].x * ai - p[i].y;
                if (1 <= bi && bi <= n) ans += cnt[bi];
                if (p[i].x == ai) cnt[p[i].y]++;
            }
        }
        printf("%lld\n", ans);
    }
}
