#include <bits/stdc++.h>

#define mp make_pair
#define ll long long
#define ld long double
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define PDD pair<long double, long double>
#define Rep(x, a, b) for(int x=a; x<=b; x++)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
    //      freopen("output.txt", "w", stdout);
    #endif
  /*********************START************************/

  map<string , int> table;
  ll count=0;
  string input;

  for(cin>>count;count;count--) {

    cin >> input;
    if(table.find(input)==table.end()) {

      if(count!=1)
        cout << "OK" << "\n";
      else
        cout << "OK";

      table[input]++;
    } else {

      if(count!=1)
        cout << input << table[input] << "\n";
      else
        cout << input << table[input];

      table[input]++;
    }

  }

  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}