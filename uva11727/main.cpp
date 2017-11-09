#include <iostream>
#include <cstdio>

int main() {
    int num, s1, s2, s3, flag=0,c=1;
    if(scanf("%d", &num)==1){
        while(num--){
            if(scanf("%d %d %d",&s1, &s2, &s3)==3) {
                if(s1>s2) flag++;
                if(s1>s3) flag++;

                // the maximum number is s1, so the only thing we need to is comparing s2 and s3
                if(flag == 2) {
                    if(s2>s3) {
                        printf("Case %d: %d\n", c++, s2);
                    } else {
                        printf("Case %d: %d\n", c++, s3);
                    }
                } else if(flag==0) {
                     if(s2>s3) {
                         printf("Case %d: %d\n", c++, s3);
                     } else {
                         printf("Case %d: %d\n", c++, s2);
                     }
                } else {
                    printf("Case %d: %d\n", c++, s1);
                }
            }
            flag=0;
        }
    }
    return 0;
}