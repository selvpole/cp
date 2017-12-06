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
    int count, col, row, c=1;
    char input;
    while(cin>>row>>col && (row || col)) {

      if(c!=1) cout <<"\n";

      vector<vector<char>> field(row, vector<char>(col, '0'));

      for(int y=0;y<row;y++) {
        for(int x=0;x<col;x++) {
          cin >> input;
          if(input=='*') {
            // top left right bottom

            field.at(y).at(x) = input;

            if(y-1>=0 && field.at(y-1).at(x) != '*') field.at(y-1).at(x)++;
            if(x-1>=0 && field.at(y).at(x-1) != '*') field.at(y).at(x-1)++;
            if(y+1<row && field.at(y+1).at(x) != '*') field.at(y+1).at(x)++;
            if(x+1<col && field.at(y).at(x+1) != '*') field.at(y).at(x+1)++;

            // left top, right top, left bottom, right bottom
            if(x-1>=0 && y-1>=0 && field.at(y-1).at(x-1) != '*') field.at(y-1).at(x-1)++;
            if(x+1<col && y-1>=0 && field.at(y-1).at(x+1) != '*') field.at(y-1).at(x+1)++;
            if(x-1>=0 && y+1<row && field.at(y+1).at(x-1) != '*') field.at(y+1).at(x-1)++;
            if(x+1<col && y+1<row && field.at(y+1).at(x+1) != '*') field.at(y+1).at(x+1)++;

          }
        }
      }

      cout << "Field #" << c++ <<":"<<"\n";
      for(int y=0; y<row; y++) {
        for(int x=0; x<col ;x++) {
          cout << field[y][x];
        }
        cout <<"\n";
      }
    }

    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}