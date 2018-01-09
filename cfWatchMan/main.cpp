#include <bits/stdc++.h>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define mp make_pair
#define ll long long
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define Rep(x, a, b) for(int x=a; x<=b; x++)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
    // FileIn(input);
    // FileOut(output);
    /*********************START************************/

    ll a,b,ans=0;
    map<int,int> x,y;
    map<PLL, int> re;

    int count=0;

    for(cin>>count;count;count--) {
      cin>>a>>b;
      ans+= x[a]++ + y[b]++ + - re[{a,b}]++;
    }

    cout << ans;

    /*********************END**************************/
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}