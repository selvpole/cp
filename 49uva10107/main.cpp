#include <bits/stdc++.h>

#define mp make_pair
#define ll long long
#define ld long double
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PDD pair<long double, long double>
#define Rep(x, a, b) for(int x=a; x<b; x++)
#define SC(name) for(auto it = name.begin(); it!=name.end(); it++) cout << *it << " ";
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
  /*********************START************************/
  
    vector<ll> in;
    ll input,m1,m2;
    while(cin>>input) {
      in.push_back(input);
      sort(in.begin(), in.end());
      m1=m2=0;
      m1 = in.size() / 2;
      if(in.size()%2) {
        cout << in[m1] << "\n";
      } else {
        m2 = m1 - 1;
        cout << (in[m1] + in[m2])/2  << "\n";
      }
    }
   
  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
      fclose(stdout);
    #endif
    return 0;
}