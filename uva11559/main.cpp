#include <iostream>
#include <cstdio>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)
#define MAX 100000000

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
//    FileOut(output);

    // # of people, budget, # of hotel, # of week
    int nop, budget, noh, now;

    while(cin >> nop >> budget >> noh >> now) {
      int min = MAX;
      while(noh--) {
        int pricePerPerson = 0, totalCost=0, numOfBed =0, totalWeek = now;
        cin >> pricePerPerson;
        totalCost = nop * pricePerPerson;
        while(totalWeek--) {
          cin >> numOfBed;
          if ( numOfBed >= nop && totalCost <= budget && totalCost < min) {
            min = totalCost;
          }
        }
      }

      if(min==MAX) {
        cout << "stay home" << "\n";
      } else {
        cout << min << "\n";
      }
    }
    fclose(stdin);
//    fclose(stdout);
    return 0;
}