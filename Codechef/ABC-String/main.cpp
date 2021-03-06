/****************************************************
 * Author      : Kaidul Islam
 * University  : Khulna University of Engr. and Tech.
*****************************************************/
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(__typeof(n) i = 0; i < (n); i++)
#define rep1(i, n) for(__typeof(n) i = 1; i <= (n); i++)
#define FOR(i, a, b) for(__typeof(b) i = (a); i <= (b); i++)
#define forstl(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define INF (1 << 30)
#define PI acos(-1.0)
#define pb push_back
#define ppb pop_back
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof x)
#define eps 1e-9
#define pii pair<int, int>
#define couple make_pair
#define X first
#define Y second
#define vi vector<int>
#define vpii vector< pii >
#define si set<int>
#define SCi(x) sf("%d", &x)
#define SC2(x, y) sf("%d %d", &x, &y)
#define SC3(x, y, z) sf("%d %d %d", &x, &y, &z)
#define SCs(x) sf("%s", x)
#define pf printf
#define print(x) pf("%d ", x)
#define println(x) pf("%d\n", x)
#define newLine pf("\n")
#define sf scanf
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#if ( _WIN32 or __WIN32__ )
    #define LLD "%I64d"
#else
    #define LLD "%lld"
#endif
#define SCl(x) sf(LLD, &x)
#define printl(x) pf(LLD, x)
#define MAX6 1000000
#define MAX7 10000000
#define MAX9 1000000000
#define MOD7 (MAX7 + 7)
#define MOD9 (MAX9 + 9)
typedef long long i64;
typedef unsigned long long ui64;
const i64 INF64 = (i64)1E18;

// BitMask
int Set(int N, int pos) {
    return N = N | (1 << pos);
}
int Reset(int N, int pos) {
    return N = N & ~(1 << pos);
}
int Check(int N, int pos) {
    return (N & (1 << pos));
}
int toggle(int N, int pos) {
    if( Check(N, pos) )
        return N = Reset(N, pos);
    return N = Set(N, pos);
}

// direction array
//int dx[] = {0, -1, 0, 1};
//int dy[] = {-1, 0, 1, 0};
//int Dx[] = {0, -1, -1, -1, 0, 1, 1, 1};
//int Dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
//int row, col;
//bool isValid(int i, int j) {
//    return i >= 0 and j >= 0 and i < row and j < col;
//}

/** Implementation **/
// http://discuss.codechef.com/questions/40359/abcstr-editorial
int main(void) {
#ifndef ONLINE_JUDGE
     READ("input.txt");
    // WRITE("out.txt");
#endif
    string s;
    getline(cin, s);
    map <pii, int> cnt;
    int a = 0, b = 0, c = 0, n = s.length();
    i64 ans = 0;
    cnt[couple(0, 0)]++;
    rep(i, n) {
        a += s[i] == 'A';
        b += s[i] == 'B';
        c += s[i] == 'C';
        ans += cnt[couple(a - b, c - b)];
        cnt[couple(a - b, c - b)]++;
    }
    pf(LLD, ans);
    return EXIT_SUCCESS;
}
