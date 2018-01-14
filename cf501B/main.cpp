#include <bits/stdc++.h>

#define mp make_pair
#define ll long long
#define ld long double
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PDD pair<long double, long double>
#define Rep(x, a, b) for(int x=a; x<=b; x++)
#define C(x,y) cout << x << " " <<  y << "\n";
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
    //      freopen("output.txt", "w", stdout);
    #endif
  /*********************START************************/

  map<string, string> t,t1;
  string newS,oldS;
  ll count=0;

  for(cin>>count;count;count--) {
    cin >> oldS >> newS;
    if(t1.find(oldS)==t1.end()) {
      t[oldS] = newS;
      t1[newS] = oldS;
    } else {
      t[t1[oldS]] = newS;
      t1[newS] = t1[oldS];
    }
  }

  cout << t.size() << "\n";

  for(auto it = t.begin(); it!=t.end(); it++){
    if(it==prev(t.end(),1))
      cout << it->first << " " << it->second;
    else
      cout << it->first << " " << it->second << "\n";
  }

  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}