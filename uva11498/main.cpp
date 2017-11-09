#include <iostream>
#include <cstdio>

int main() {
    int newX,newY,num,oriX,oriY;
    while(scanf("%d", &num)==1 , num!=0) {
        if (scanf("%d %d", &oriX, &oriY)==2) {
            while(num--) {
                if(scanf("%d %d", &newX, &newY)==2) {
                    if (newX == oriX || newY == oriY) printf("divisa\n");
                    if (newX > oriX && newY > oriY) printf("NE\n");
                    if (newX > oriX && newY < oriY) printf("SE\n");
                    if (newX < oriX && newY > oriY) printf("NO\n");
                    if (newX < oriX && newY < oriY) printf("SO\n");
                } else {
                    printf("wrong input format");
                    return 0;
                }
            }
        } else {
            printf("wrong input format");
            return 0;
        }
    }
    return 0;
}