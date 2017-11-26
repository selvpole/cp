#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

struct Suit {
    bool A = false;
    bool K = false;
    bool Q = false;
    bool J = false;
    bool stopped = false;
    int num = 0;
};

int main() {
//    __FastIO;
    FileIn(input);
    //FileOut(output);
    /*********************START************************/
    while(1) {

        // lazy to init, so put it in while
        char input[3];
        int total=0;
        Suit S,H,C,D;

        for(int i=0; i<13; i++) {

            if (scanf("%s", input) !=1 ) return 0;

            // rearrange the input info
            if(input[0] == 'A') {
                if(input[1]=='S') {
                    S.A = true;
                    S.num++;
                } else if (input[1]=='H') {
                    H.A = true;
                    H.num++;
                } else if (input[1]=='D') {
                    D.A = true;
                    D.num++;
                } else if (input[1]=='C') {
                    C.A = true;
                    C.num++;
                }
                total+=4;
            } else if (input[0] == 'K') {
                if(input[1]=='S') {
                    S.K = true;
                    S.num++;
                } else if (input[1]=='H') {
                    H.K = true;
                    H.num++;
                } else if (input[1]=='D') {
                    D.K = true;
                    D.num++;
                } else if (input[1]=='C') {
                    C.K = true;
                    C.num++;
                }
                total+=3;
            } else if (input[0] == 'Q') {
                if(input[1]=='S') {
                    S.Q = true;
                    S.num++;
                } else if (input[1]=='H') {
                    H.Q = true;
                    H.num++;
                } else if (input[1]=='D') {
                    D.Q = true;
                    D.num++;
                } else if (input[1]=='C') {
                    C.Q = true;
                    C.num++;
                }
                total+=2;
            } else if (input[0] == 'J') {
                if(input[1]=='S') {
                    S.J = true;
                    S.num++;
                } else if (input[1]=='H') {
                    H.J = true;
                    H.num++;
                } else if (input[1]=='D') {
                    D.J = true;
                    D.num++;
                } else if (input[1]=='C') {
                    C.J = true;
                    C.num++;
                }
                total+=1;
            } else {
                if(input[1]=='S') {
                    S.num++;
                } else if (input[1]=='H') {
                    H.num++;
                } else if (input[1]=='D') {
                    D.num++;
                } else if (input[1]=='C') {
                    C.num++;
                }
            }
        }

      // 使用條件2
      if(S.K && S.num-1 == 0) total--;
      if(H.K && H.num-1 == 0) total--;
      if(D.K && D.num-1 == 0) total--;
      if(C.K && C.num-1 == 0) total--;

      // 使用條件3
      if(S.Q && (S.num-1) <= 1 && (S.num-1)>=0) total--;
      if(H.Q && (H.num-1) <= 1 && (H.num-1)>=0) total--;
      if(D.Q && (D.num-1) <= 1 && (D.num-1)>=0) total--;
      if(C.Q && (C.num-1) <= 1 && (C.num-1)>=0) total--;

      // 使用條件4
      if(S.J && (S.num-1) <= 2 && (S.num-1)>=0) total--;
      if(H.J && (H.num-1) <= 2 && (H.num-1)>=0) total--;
      if(D.J && (D.num-1) <= 2 && (D.num-1)>=0) total--;
      if(C.J && (C.num-1) <= 2 && (C.num-1)>=0) total--;

      // 確定每個花色是否有Stopped
      if(S.A || (S.K && (S.num-1)>=1) || (S.Q && (S.num-1)>=2)) {
        S.stopped = true;
      }

      if(H.A || (H.K && (H.num-1)>=1) || (H.Q && (H.num-1)>=2)) {
        H.stopped = true;
      }

      if(D.A || (D.K && (D.num-1)>=1) || (D.Q && (D.num-1)>=2)) {
        D.stopped = true;
      }

      if(C.A || (C.K && (C.num-1)>=1) || (C.Q && (C.num-1)>=2)) {
        C.stopped = true;
      }

      if(total >= 16 && S.stopped && H.stopped && D.stopped && C.stopped ) {
        printf("BID NO-TRUMP\n");
      } else {

        if(S.num == 2) ++total;
        if(H.num == 2) ++total;
        if(D.num == 2) ++total;
        if(C.num == 2) ++total;

        if(S.num == 0 || S.num == 1) total+=2;
        if(H.num == 0 || H.num == 1) total+=2;
        if(D.num == 0 || D.num == 1) total+=2;
        if(C.num == 0 || C.num == 1) total+=2;

        if(total<14) {
          printf("PASS\n");
        } else {

          // 找出最大值
          vector<int> n;
          int max = S.num;
          n.push_back(S.num);
          n.push_back(H.num);
          n.push_back(D.num);
          n.push_back(C.num);

          for(int i=0; i<4; i++) {
            if(n[i]> max) {
              max = n[i];
            }
          }

          if(max == S.num) {
            printf("BID S\n");
          } else if (max == H.num) {
            printf("BID H\n");
          } else if (max == D.num) {
            printf("BID D\n");
          } else if (max == C.num) {
            printf("BID C\n");
          }
        }
      }

    }
    /*********************END**************************/
    fclose(stdin);
    //fclose(stdout);
    return 0;
}