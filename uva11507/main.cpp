#include <iostream>
#include <cstdio>
#include <cstring>
#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
//    __FastIO;
//    FileIn(input);
//    FileOut(output);
    /*********************START************************/
    char input[3], direction[3];
    int leng=1;
    while(scanf("%d", &leng)==1 && leng) {
      strcpy(direction, "+x");
      for(int i=leng-1; i>=1;i--) {
        scanf("%s", input);
        if(!strcmp(input, "No")) {
          continue;
        } else if(!strcmp(direction, "-x")) {
          if(!strcmp(input, "+y")) strcpy(direction, "-y");
          if(!strcmp(input,"-y")) strcpy(direction,"+y");
          if(!strcmp(input, "+z")) strcpy(direction, "-z");
          if(!strcmp(input,"-z")) strcpy(direction,"+z");
        } else if (!strcmp(direction, "+x")) {
          if(!strcmp(input,"+y")) strcpy(direction, "+y");
          if(!strcmp(input,"-y")) strcpy(direction,"-y");
          if(!strcmp(input,"+z")) strcpy(direction, "+z");
          if(!strcmp(input,"-z")) strcpy(direction,"-z");
        } else if(input[1]==direction[1]) {
          if(direction[0] == input[0]) {
            strcpy(direction,"-x");
          } else {
            strcpy(direction,"+x");
          }
        }
      }
      printf("%s\n", direction);
    }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}