#include <bits/stdc++.h>
#include <cmath>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define mp make_pair
#define ll long long
#define D double
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define Rep(x, a, b) for(int x=a; x<=b; x++)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
    //FileOut(output);
    /*********************START************************/

    long D n,m,a;

    unsigned ll ans;

    cin >> n >> m >> a;

    ans = ceil(n/a)*ceil(m/a);

    cout << ans;


    /*********************END**************************/
//    fclose(stdin);
    //fclose(stdout);
    return 0;
}