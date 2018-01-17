#include <bits/stdc++.h>

#define mp make_pair
#define ll long long
#define ld long double
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PDD pair<long double, long double>
#define VI(x) vector<int> x
#define Rep(x, a, b) for(int x=a; x<b; x++)
#define SC(name) for(auto it = name.begin(); it!=name.end(); it++) cout << *it << " ";
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
    //      freopen("output.txt", "w", stdout);
    #endif
  /*********************START************************/

  VI(trans);
  int n, p, in;
  string ans = "NO";

  for(cin>>n>>p;n;n--) {
    cin >> in;
    trans.push_back(in);
  }

  for(int i=0; i<trans.size();i+=trans[i]) {
    if(i==p-1) {
      ans = "YES";
      break;
    }
  }

  cout << ans;

  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}
