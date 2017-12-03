#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstddef>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

/*
 * 1. 還源 印出棋盤, 空格的部分用0取代
 * 2. 從第一個Row開始，依序找到p,n,b,r,q,k
 * 3. 檢查目前棋子能攻擊的範圍，把能攻擊的範圍，標成1
 * 4. 全部跑完後，依序用for迴圈找出0的個數
 * */

int main() {
    __FastIO;
//    FileIn(input);
    //FileOut(output);
    /*********************START************************/
    string fen;
    while(getline(cin, fen)) {

      size_t pos = 0;
      size_t pos_old=0;
      int c=0;
      vector<vector<char>> board(8, vector<char>(8));

      for(int y=0;y<8;y++) {
        for(int x=0;x<8;x++) {
          board[y][x]='0';
        }
      }

      for(int y=0;y<8;y++) {
        pos = fen.find_first_of("/", pos);
        if(pos>300) pos = fen.size();
        int x=0;

        for(size_t i=pos_old; i<pos ; i++) {
          if( (fen[i]>='a' && fen[i] <='z') ||
              (fen[i]>='A' && fen[i] <='Z')) {

            if(x>=8) {
              cout << "x happen overflow";
              return 0;
            }

            board[y][x] = fen[i];
            x++;
          } else {
            x = x + ((int)fen[i] - 48);
          }
        }

        pos++;
        pos_old = pos;
      }



      for(int y=0;y<8;y++) {
        for(int x=0;x<8;x++) {
          if(board[y][x]=='0') continue;

          if(board[y][x]=='k' || board[y][x]=='K') {
            if(y-1>=0 && board[y-1][x]=='0') board[y-1][x]='1'; // top
            if(x-1>=0 && board[y][x-1]=='0') board[y][x-1]='1'; // left
            if(x+1<8  && board[y][x+1]=='0') board[y][x+1]='1'; // right
            if(y+1<8  && board[y+1][x]=='0') board[y+1][x]='1'; // bottom

            if(x-1>=0 && y-1>=0 && board[y-1][x-1]=='0') board[y-1][x-1]='1'; // left top
            if(x-1>=0 && y+1<8  && board[y+1][x-1]=='0') board[y+1][x-1]='1'; // left bottom
            if(y-1>=0 && x+1<8  && board[y-1][x+1]=='0') board[y-1][x+1]='1'; // right top
            if(y+1<8  && x+1<8  && board[y+1][x+1]=='0') board[y+1][x+1]='1'; // right bottom

          } else if(board[y][x]=='r' || board[y][x]=='R') {
            // head for horizontal left
            for(int i=x; i>0;i--) {
              if(board[y][i-1]!='0' && board[y][i-1]!='1')
                break;
              if(board[y][i-1]=='0') {
                board[y][i-1] = '1';
              }
            }

            // head for horizontal right
            for(int i=x; i<7;i++) {
              if(board[y][i+1]!='0' && board[y][i+1]!='1')
                break;
              if(board[y][i+1]=='0') {
                board[y][i+1] = '1';
              }
            }

            // head for vertical top
            for(int j=y; j>0; j--) {
              if(board[j-1][x]!='0' && board[j-1][x]!='1')
                break;
              if(board[j-1][x]=='0') {
                board[j-1][x] = '1';
              }
            }

            // head for vertical bottom
            for(int j=y;j<7;j++) {
              if(board[j+1][x]!='0' && board[j+1][x]!='1')
                break;
              if(board[j+1][x]=='0') {
                board[j+1][x] ='1';
              }
            }

          } else if(board[y][x]=='q' || board[y][x]=='Q') {

            // head for horizontal left
            for(int i=x; i>0;i--) {
              if(board[y][i-1]!='0' && board[y][i-1]!='1')
                break;
              if(board[y][i-1]=='0') {
                board[y][i-1] = '1';
              }
            }

            // head for horizontal right
            for(int i=x; i<7;i++) {
              if(board[y][i+1]!='0' && board[y][i+1]!='1')
                break;
              if(board[y][i+1]=='0') {
                board[y][i+1] = '1';
              }
            }

            // head for vertical top
            for(int j=y; j>0; j--) {
              if(board[j-1][x]!='0' && board[j-1][x]!='1')
                break;
              if(board[j-1][x]=='0') {
                board[j-1][x] = '1';
              }
            }

            // head for vertical bottom
            for(int j=y;j<7;j++) {
              if(board[j+1][x]!='0' && board[j+1][x]!='1')
                break;
              if(board[j+1][x]=='0') {
                board[j+1][x] ='1';
              }
            }

            // left bottom to right top

            // head for left bottom
            int xx=x, yy=y;
            while(yy+1<8 && xx-1>=0 && (board[yy+1][xx-1]=='0' || board[yy+1][xx-1]=='1')) {
              if(board[yy+1][xx-1]=='0') {
                board[yy+1][xx-1]='1';
              }
              yy++;
              xx--;
            }

            xx=x,yy=y;
            // head for right top
            while(yy-1>=0 && xx+1<8 && (board[yy-1][xx+1]=='0' || board[yy-1][xx+1]=='1')) {
              if(board[yy-1][xx+1]=='0') {
                board[yy-1][xx+1]='1';
              }
              xx++;
              yy--;
            }

            // left top to right bottom
            xx=x,yy=y;
            // head for left top
            while(yy-1>=0 && xx-1>=0 && (board[yy-1][xx-1]=='0' || board[yy-1][xx-1]=='1')) {
              if(board[yy-1][xx-1]=='0') {
                board[yy-1][xx-1]='1';
              }
              xx--;
              yy--;
            }

            xx=x,yy=y;
            // head for right bottom
            while(yy+1<8 && xx+1<8 && (board[yy+1][xx+1]=='0' || board[yy+1][xx+1]=='1')) {
              if(board[yy+1][xx+1]=='0') {
                board[yy+1][xx+1]='1';
              }
              xx++;
              yy++;
            }
          } else if(board[y][x]=='b' || board[y][x]=='B') {

            // head for left bottom
            int xx=x, yy=y;
            while(yy+1<8 && xx-1>=0 && (board[yy+1][xx-1]=='0' || board[yy+1][xx-1]=='1')) {
              if(board[yy+1][xx-1]=='0') {
                board[yy+1][xx-1]='1';
              }
              yy++;
              xx--;
            }

            xx=x,yy=y;
            // head for right top
            while(yy-1>=0 && xx+1<8 && (board[yy-1][xx+1]=='0' || board[yy-1][xx+1]=='1')) {
              if(board[yy-1][xx+1]=='0') {
                board[yy-1][xx+1]='1';
              }
              xx++;
              yy--;
            }

            // left top to right bottom
            xx=x,yy=y;
            // head for left top
            while(yy-1>=0 && xx-1>=0 && (board[yy-1][xx-1]=='0' || board[yy-1][xx-1]=='1')) {
              if(board[yy-1][xx-1]=='0') {
                board[yy-1][xx-1]='1';
              }
              xx--;
              yy--;
            }

            xx=x,yy=y;
            // head for right bottom
            while(yy+1<8 && xx+1<8 && (board[yy+1][xx+1]=='0' || board[yy+1][xx+1]=='1')) {
              if(board[yy+1][xx+1]=='0') {
                board[yy+1][xx+1]='1';
              }
              xx++;
              yy++;
            }

          } else if(board[y][x]=='n' ||  board[y][x]=='N') {
            // left top
            if(x-1>=0 && y-2>=0 && board[y-2][x-1]=='0')
              board[y-2][x-1]='1';
            if(x-2>=0 && y-1>=0 && board[y-1][x-2]=='0')
              board[y-1][x-2]='1';

            // left bottom
            if(x-1>=0 && y+2<8 && board[y+2][x-1]=='0')
              board[y+2][x-1]='1';
            if(x-2>=0 && y+1<8 && board[y+1][x-2]=='0')
              board[y+1][x-2]='1';

            // right top
            if(x+1<8 && y-2>=0 && board[y-2][x+1]=='0')
              board[y-2][x+1]='1';
            if(x+2<8 && y-1>=0 && board[y-1][x+2]=='0')
              board[y-1][x+2]='1';

            // right bottom
            if(x+1<8 && y+2<8 && board[y+2][x+1]=='0')
              board[y+2][x+1]='1';
            if(x+2<8 && y+1<8 && board[y+1][x+2]=='0')
              board[y+1][x+2]='1';

          } else {
            if(board[y][x]=='P') {
              if(x-1>=0 && y-1>=0 && board[y-1][x-1]=='0') board[y-1][x-1]='1'; // left top
              if(y-1>=0 && x+1<8  && board[y-1][x+1]=='0') board[y-1][x+1]='1'; // right top
            } else if (board[y][x]=='p') {
              if(x-1>=0 && y+1<8  && board[y+1][x-1]=='0') board[y+1][x-1]='1'; // left bottom
              if(y+1<8  && x+1<8  && board[y+1][x+1]=='0') board[y+1][x+1]='1'; // right bottom
            }
          }

        }
      }

      for(int y=0;y<8;y++)
        for(int x=0;x<8;x++)
          if(board[y][x]=='0')
            c++;

      cout << c << "\n";
      board.clear();
    }
    /*********************END**************************/
//    fclose(stdin);
    //fclose(stdout);
    return 0;
}