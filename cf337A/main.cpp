#include <bits/stdc++.h>

#define mp make_pair
#define ll long long
#define ld long double
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PDD pair<long double, long double>
#define Rep(x, a, b) for(int x=a; x<=b; x++)
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

    ll s,p,input,min=1001;
    vector<ll> pp;

    for(cin>>s>>p;p;p--) {
      cin >> input;
      pp.push_back(input);
    }

    sort(pp.begin(),pp.end());

    for(auto it = pp.begin();;it++) {
      auto itt = next(it,s-1);
      if(itt==pp.end()) break;
      if((*itt-*it)<min) min = *itt - *it;
    }

    cout << min ;
  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}