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

        int testCase, col, row, days;
        char live;
        cin >> testCase;
        while(testCase--) {
            cin>>row>>col>>days;
            vector<vector<char>> newGrid(row, vector<char>(col, '0'));
            vector<vector<char>> oldGrid(row, vector<char>(col, '0'));

            for(int y=0; y<row; y++) {
                for(int x=0; x<col; x++) {
                    cin >> live;
                    oldGrid.at(y).at(x) = live;
                }
            }

            while(days--) {

                for(int y=0;y<row;y++) {
                    for(int x=0; x<col;x++) {

                            // compare with right element
                            if(oldGrid.at(y).at(x)=='R') {
                              if(x+1<col && oldGrid.at(y).at(x+1) == 'P') newGrid.at(y).at(x) ='P';
                              else if(y+1<row && oldGrid.at(y+1).at(x) == 'P') newGrid.at(y).at(x) ='P';
                              else if(x-1>=0 && oldGrid.at(y).at(x-1) == 'P') newGrid.at(y).at(x) ='P';
                              else if(y-1>=0 && oldGrid.at(y-1).at(x) == 'P') newGrid.at(y).at(x) ='P';
                              else
                                newGrid.at(y).at(x)= 'R';
                            }

                            if(oldGrid.at(y).at(x)=='P') {
                              if(x+1<col && oldGrid.at(y).at(x+1) == 'S') newGrid.at(y).at(x) ='S';
                              else if(y+1<row && oldGrid.at(y+1).at(x) == 'S') newGrid.at(y).at(x) ='S';
                              else if(x-1>=0 && oldGrid.at(y).at(x-1) == 'S') newGrid.at(y).at(x) ='S';
                              else if(y-1>=0 && oldGrid.at(y-1).at(x) == 'S') newGrid.at(y).at(x) ='S';
                              else
                                newGrid.at(y).at(x)= 'P';
                            }

                            if(oldGrid.at(y).at(x)=='S') {
                              if(x+1<col && oldGrid.at(y).at(x+1) == 'R') newGrid.at(y).at(x) ='R';
                              else if(y+1<row && oldGrid.at(y+1).at(x) == 'R') newGrid.at(y).at(x) ='R';
                              else if(x-1>=0 && oldGrid.at(y).at(x-1) == 'R') newGrid.at(y).at(x) ='R';
                              else if(y-1>=0 && oldGrid.at(y-1).at(x) == 'R') newGrid.at(y).at(x) ='R';
                              else
                                newGrid.at(y).at(x)= 'S';
                            }
                    }
                }
                oldGrid = newGrid;
            }

          for( int y=0 ; y<row ; y++ ) {
            for( int x=0 ; x <col ; x++ ) {
                cout << newGrid.at(y).at(x);
            }
            cout << "\n";
          }
          if(testCase!=0) cout << "\n";

        }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}