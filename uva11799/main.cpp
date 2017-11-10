#include <iostream>
#include <cstdio>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
    int noc, c=1;
    cin >> noc;
    while(noc--) {
      int numOfGhost=0,max=0;
      cin >> numOfGhost;
      while(numOfGhost--) {
        int speed=0;
        cin >> speed;
        if(speed>max) {
          max = speed;
        }
      }
      printf("Case %d: %d\n", c++, max);
    }
//    fclose(stdin);
    return 0;
}