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
  
    int days, sumTime, min, max, minSum=0;
    vector<PII> sch;
    string anss = "NO";

    for(cin>>days>>sumTime;days;days--) {
        cin >> min >> max;
        sch.push_back({min, max});
    }

    vector<int> ans(sch.size(),0);

    Rep(i, 0, sch.size()) {
        minSum+=sch[i].first;
        if(minSum>sumTime) {
          if(sch[i].first!=0) goto stop;
        } else {
          ans[i] = sch[i].first;
        }
    }

    Rep(i, 0, sch.size()) {
        if((minSum-sch[i].first)+sch[i].second>=sumTime) {
            ans[i] = sumTime - (minSum-sch[i].first);
            anss = "YES";
            goto stop;
        } else {
            ans[i] = sch[i].second;
            minSum+= (sch[i].second-sch[i].first);
        }
    }

    stop:
    if(anss=="YES") {
        cout << anss << "\n";
        Rep(i,0,ans.size()) cout << ans[i] << " ";
    } else
        cout << anss;

  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}