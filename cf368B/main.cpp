#include <bits/stdc++.h>

#define mp make_pair
#define ll long long
#define ld long double
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PDD pair<long double, long double>
#define Rep(x, a, b) for(int x=a; x<b; x++)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
    //      freopen("output.txt", "w", stdout);
    #endif
  /*********************START************************/

    map<int, int> table;
    vector<int> a,ans;
    int n,m,input;

    cin >> n >> m;

    Rep(i, 0, n) { cin >> input; a.push_back(input); }

    for(int i=a.size()-1; i>=0; i--) {
        if(i==a.size()-1) { table.insert({a[i],1}); a[i] = 1; }
        else if(table.find(a[i])==table.end()) {
           table.insert({a[i],1});
           a[i] = a[i+1] + 1;
        } else
          a[i] = a[i+1];
    }

    Rep(i, 0, m) {
      cin >> input;
      if(i==m-1) cout << a[input-1];
      else
        cout << a[input-1] << "\n";
    }

  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}