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
    //      freopen("output.txt", "w", stdout);
    #endif
  /*********************START************************/

    string input, prev, next, ans, temp;
    vector<string> inset;
    int maxOfMin = -1000000;

    while(getline(cin, input)) {

      prev = next = input;

      Rep(i, 0, 10) {
        prev_permutation(prev.begin(), prev.end());
        inset.push_back(prev);
      }

      inset.push_back(input);

      Rep(i, 0, 10) {
        next_permutation(next.begin(), next.end());
        inset.push_back(next);
      }

      Rep(i, 0, inset.size()) {

        temp = inset[i];
        int lmin=1000000, diff=0;

        Rep(j, 0 , temp.size()-1) {
          diff = abs((int)temp[j]-(int)temp[j+1]);
          if (diff < lmin) lmin = diff;
        }

        if(lmin >= maxOfMin) {
            if(lmin == maxOfMin) {
              maxOfMin = lmin;
              ans = ans > inset[i] ? inset[i] : ans;
            } else {
              maxOfMin = lmin;
              ans=inset[i];
            }
        }
      }

      cout << ans << to_string(maxOfMin) << "\n";
      inset.clear();
      ans="";
      maxOfMin=-1000000;

    }

  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}