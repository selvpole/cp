#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
//    FileOut(output);
    /*********************START************************/
    int i1, i2, i3, i4, i5;
    vector<int> sister, brother, all, rest;
    while(cin >> i1 >> i2 >> i3 >> i4 >> i5, (i1 || i2 || i3 || i4 || i5) ) {

        int win=0, lose=0;

        sister.push_back(i1);
        sister.push_back(i2);
        sister.push_back(i3);
        brother.push_back(i4);
        brother.push_back(i5);

        all.reserve(sister.size()+brother.size());
        all.insert(all.end(), sister.begin(), sister.end());
        all.insert(all.end(), brother.begin(), brother.end());

        // i4
        for(int i=0; i<2; i++) {

          int index_max=0, index_min=0 , v_max =100000000, v_min =100000000;

          for(int j=0; j<3-i; j++) {
            if (sister[j] - brother[i] > 0) {
              if (sister[j] - brother[i] < v_min) {
                v_min = sister[j] - brother[i];
                index_min = j;
              }
            } else {
              if (sister[j] - brother[i] < 0) {
                if (sister[j] - brother[i] < v_max) {
                  v_max = sister[j] - brother[i];
                  index_max = j;

                }
              }
            }
          }

          if(v_min!=100000000) {
            sister.erase(sister.begin()+index_min);
            win++;
          } else if(v_max!=100000000) {
            sister.erase(sister.begin()+index_max);
            lose++;
          }
        }

        if(win==2) {
          cout << "-1" << "\n";
        } else if(lose==2) {

          int min = 1;

          for(int i=0; i<all.size();i++) {
            if(min == all[i]) {
              min++;
              i=-1;
            }
          }

          if(min > 52) min = -1;

          cout << min << "\n";

        } else {
          int value = sister[0] + 1;

          for(int i=0; i<all.size(); i++) {
            if(value==all[i]) {
              value++;
              i=-1;
            }
          }

          if(value > 52) value = -1;
          cout << value << "\n";
        }
        sister.clear();
        brother.clear();
        all.clear();
    }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}