/****************************************************
***   Problem       : Mike and Stamps
***   Author        : Kaidul Islam
***   E-mail        : ikaidul@yahoo.com
***   University    : KUET, Dept. of CSE
***   Blog          : http://kaidul.efireit.com
****************************************************/
#include <bits/stdc++.h>

using namespace std;

#define MEMSET_INF 127
#define MEMSET_HALF_INF 63
#define stream istringstream
#define rep(i,n) for(__typeof(n) i=0; i<(n); i++)
#define repl(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define FOR(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define forstl(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define INF (1<<30)
#define PI acos(-1.0)
#define pb push_back
#define ppb pop_back
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define memsp(x) mem(x,MEMSET_INF)
#define memdp(x) mem(x,-1)
#define memca(x) mem(x,0)
#define eps 1e-9
#define pii pair<int,int>
#define pmp make_pair
#define ft first
#define sd second
#define vi vector<int>
#define vpii vector<pii>
#define si set<int>
#define msi map<string , int >
#define mis map<int , string >
typedef long long i64;
typedef unsigned long long ui64;
/** function **/
#define SDi(x) sf("%d", &x)
#define SDl(x) sf("%lld", &x)
#define SDs(x) sf("%s", x)
#define SD2(x,y) sf("%d%d", &x, &y)
#define SD3(x,y,z) sf("%d%d%d", &x, &y, &z)
#define pf printf
#define print(x) pf("%d ", x)
#define println(x) pf("%d\n", x)
#define sf scanf
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

/** Implementation **/
#define M 20
#define Max 20000

int N, m, maxM;
bool flag[M + 1][Max + 1];
bool exclusive[M + 1][M + 1];

int dp[(1 << M) + 1];

bool isOkay(int mask, int i) {
    if(mask & (1 << i)) return false;
    rep(pos, m) {
        if(mask & (1 << pos)) {
            if(exclusive[i][pos])
                return false;
        }
    }
    return true;
}

int solve(int i, int mask) {
    if(i == m) return 0;
    if(mask == maxM) return 0;
    if(dp[mask] != -1) return dp[mask];
    int count1 = 0, count2 = 0;

    if(isOkay(mask, i))
        count1 = 1 + solve(i + 1, mask | (1 << i));

    count2 = solve(i + 1, mask);

    return dp[mask] = max(count1, count2);
}

int main(void) {
#ifndef ONLINE_JUDGE
    READ("input.txt");
#endif
    int k, value;
    SD2(N, m);
    maxM = (1 << m) - 1;
    rep(i, m) {
        SDi(k);
        rep(j, k) {
            SDi(value);
            flag[i][value] = true;
        }
    }
    // O(m * m * n) preprocessing
    rep(i, m) {
        FOR(j, i + 1, m - 1) {
            FOR(k, 1, N) {
                if(flag[i][k] and flag[j][k]) {
                    exclusive[i][j] = exclusive[j][i] = true;
                }
            }
        }
    }
    mem(dp, -1);
    int ans = solve(0, 0);
    println(ans);
    return 0;
}
