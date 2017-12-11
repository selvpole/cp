#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
    //FileOut(output);
    /*********************START************************/

    map<int, int> row1,row2,row3,row4,row5,col1,col2,col3,col4,col5, dia1,dia2;
    int numOfTestcase, num, record;
    int r1,r2,r3,r4,r5,c1,c2,c3,c4,c5,d1,d2;
    cin >> numOfTestcase;

    while(numOfTestcase--) {
      r1=r2=r3=r4=r5=c1=c2=c3=c4=c5=d1=d2=0;
      record=0;

      // input
      for( int y=0 ; y<5 ; y++ ) {
        for( int x=0 ; x <5 ; x++ ) {

            if(x==2 && y==2) {
              col3.insert(pair<int,int>(-1, 1));
              row3.insert(pair<int,int>(-1, 1));
              dia1.insert(pair<int,int>(-1, 1));
              dia2.insert(pair<int,int>(-1, 1));
            } else {

              cin >> num;

              if(y==0) row1.insert(pair<int,int>(num, 0));
              if(y==1) row2.insert(pair<int,int>(num, 0));
              if(y==2) row3.insert(pair<int,int>(num, 0));
              if(y==3) row4.insert(pair<int,int>(num, 0));
              if(y==4) row5.insert(pair<int,int>(num, 0));

              if(x==0) col1.insert(pair<int,int>(num, 0));
              if(x==1) col2.insert(pair<int,int>(num, 0));
              if(x==2) col3.insert(pair<int,int>(num, 0));
              if(x==3) col4.insert(pair<int,int>(num, 0));
              if(x==4) col5.insert(pair<int,int>(num, 0));


              if(x==y) dia1.insert(pair<int,int>(num, 0));
              if(x+y==4) dia2.insert(pair<int,int>(num, 0));
            }


        }
      }

        for(int i=0; i<75;i++) {
          // check if all the maps have the number or not
          cin >> num;

          if(row1.find(num)!=row1.end()) r1++;
          if(row2.find(num)!=row2.end()) r2++;
          if(row3.find(num)!=row3.end()) r3++;
          if(row4.find(num)!=row4.end()) r4++;
          if(row5.find(num)!=row5.end()) r5++;

          if(col1.find(num)!=col1.end()) c1++;
          if(col2.find(num)!=col2.end()) c2++;
          if(col3.find(num)!=col3.end()) c3++;
          if(col4.find(num)!=col4.end()) c4++;
          if(col5.find(num)!=col5.end()) c5++;

          if(dia1.find(num)!=dia1.end()) d1++;
          if(dia2.find(num)!=dia2.end()) d2++;

          // check if bingo for any map
          if(r1==5 || r2==5 || r3==4 || r4==5 || r5==5 || c1==5 || c2==5 || c3==4 || c4==5 || c5==5 || d1==4 || d2==4) {
            cout << "BINGO after " << i+1 << " numbers announced" << "\n";
            record = i+1;
            break;
          }
        }

      for(int i = record; i<75;i++) cin>>num;

      row1.clear();row2.clear();row3.clear();row4.clear();row5.clear();
      col1.clear();col2.clear();col3.clear();col4.clear();col5.clear();
      dia1.clear();dia2.clear();

    }

    /*********************END**************************/
//    fclose(stdin);
    //fclose(stdout);
    return 0;
}