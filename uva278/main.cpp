#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
//    FileOut(output);
    /*********************START************************/
    char cp;
    int row,col,num;
    cin >> num;
    while(num--) {
      cin >> cp >> row >> col;
      float c =0;

      if(cp=='r') {
        cout << (row > col ? col : row) << '\n';
      } else if(cp=='k') {
        if(row == col) {
          if(row/2 ==0) {
            cout << row*row / 2 << '\n';
          } else {
            cout << ((row*row)+1)/2 << '\n';
          }
        } else {
          float numberOfCeil= ceil((float)col/2);
          float numberOfFloor = floor((float)col/2);
          for(int i=0;i<row;i++) {
            if(i%2) {
              c = c + numberOfFloor;
            } else {
              c = c + numberOfCeil;
            }
          }
          cout << c << '\n';
        }
      } else if(cp=='Q') {
        // Queen
        cout << (row > col ? col : row) << '\n';
      } else if(cp=='K') {
        float numberOfKing = ceil((float)col/2);
        float numberOfRow = ceil((float)row/2);
        cout << numberOfKing*numberOfRow << '\n';
      }
    }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}