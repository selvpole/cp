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

    map<PDD,ld> eq;
    long double oX,oY,cases,x,y,count=0,a,b;

    for(cin>>cases>>oX>>oY;cases;cases--) {

        cin >> x >> y;

        if(x==oX) {
          if(eq.find({1,0})==eq.end()) {
            eq[{1,0}]++;
            count++;
          }
        } else {
          a = (y-oY)/(x-oX);
          b = oY - a*oX;
          if(eq.find({a,b})==eq.end()) {
            eq[{a,b}]++ ;
            count++;
          }
        }
    }

    cout << count;
    
    /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}