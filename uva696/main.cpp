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
    int row,col;
    while(cin>>row>>col, row || col) {
      float c=0;
      int oc=0, xc=0, leng=0, flag=1;
      if(row == col && row!=2) {
        if(row%2 ==0 && row>2) {
          cout << row*row / 2 << " knights may be placed on a "<<row<<" row "<<col<<" column board." << '\n';
        } else if(row%2 !=0 && row>=1) {
          cout << ((row*row)+1)/2  << " knights may be placed on a "<<row<<" row "<<col<<" column board." << '\n';
        }
      } else {
        if(row==0 || col ==0) {
          cout << "0 knights may be placed on a "<<row<<" row "<<col<<" column board." << '\n';
        } else if(col == 1) {
          cout << row << " knights may be placed on a "<<row<<" row "<<col<<" column board." << '\n';
        } else if (row == 1) {
          cout << col << " knights may be placed on a " << row << " row " << col << " column board." << '\n';
        } else if(row==2 || col==2) {
          if(row==2) leng=col;
          if(col==2) leng=row;
          for(int i=0; i<leng;i++) {
            if(xc==2) {
              flag=1;
              xc=0;
            }
            if(oc==2) {
              flag=0;
              oc=0;
            }

            if(flag==1 && oc<2) {
              c++;
              oc++;
            } else if (flag==0 && xc<2) {
              xc++;
            }
          }
            cout << c*2 << " knights may be placed on a "<<row<<" row "<<col<<" column board." << '\n';
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
          cout << c << " knights may be placed on a "<<row<<" row "<<col<<" column board." << '\n';
        }
      }
    }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}
