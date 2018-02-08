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

  string input;
  vector<int> list;
  int temp,midPosition;
  int minA,maxA;
  while(getline(cin, input)) {

    for(int num = stoi(input);num;num--) {
      cin >> temp;
      list.push_back(temp);
    }

    sort(list.begin(), list.end());

    midPosition = list.size()/2;

    if(list.size()%2) {

      minA = list[midPosition];

      auto low = lower_bound(list.begin(), list.end(), minA);
      auto up = upper_bound(list.begin(), list.end(), minA);

      cout << minA << " " << up - low << " 1" << '\n';

    } else {

      int c=0,c1=0;

      minA = list[midPosition-1];
      auto up = upper_bound(list.begin(), list.end(), minA);

      for(auto i=list.begin();i!=up;i++)
        if(*i==minA)c++;

      if(up==list.end()) {
        cout << minA << " " << c << " 1" << "\n";
      } else {
        if(list[midPosition]!=list[midPosition-1]) {
          auto upp = upper_bound(list.begin(), list.end(), *up);
          maxA = *up;
          for(auto i=up;i!=upp;i++)
            if(*i==maxA) c1++;
          cout << minA << " " << c+c1 << " " << (list[midPosition]-list[midPosition-1])+1  << "\n";
        } else {
          cout << minA << " " << c << " " << (list[midPosition]-list[midPosition-1])+1  << "\n";
        }
      }
    }

    list.clear();
    cin.ignore(1024, '\n');
  }

  /*********************END**************************/
    #ifndef ONLINE_JUDGE
      fclose(stdin);
//      fclose(stdout);
    #endif
    return 0;
}