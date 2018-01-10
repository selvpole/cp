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
//    FileIn(input);
    //FileOut(output);
    /*********************START************************/

    ll nOpr, max, div, num, count=0;
    queue<ll> line;

    for(cin>>nOpr>>max>>div;nOpr;nOpr--) {
      cin >> num;
      if(num>max) {
        queue<ll>().swap(line);
        continue;
      }
      if(line.size()!=div) {
        line.push(num);
        if(line.size()==div) {
          line.pop();
          count++;
        }
      }
    }

    cout << count;
    /*********************END**************************/
//    fclose(stdin);
    //fclose(stdout);
    return 0;
}