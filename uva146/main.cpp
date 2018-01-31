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

  string input;
  while(getline(cin, input) && input!="#") {
    if(next_permutation(input.begin(), input.end()))
      cout << input << "\n";
    else
      cout << "No Successor" << "\n";
  }

  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}
