#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int num, v1, v2;
    if(scanf("%d", &num) == 1) {
        while (num--) {
            if (scanf("%d %d", &v1, &v2) == 2 ) {
                if(v1>v2) printf(">\n");
                if(v1<v2) printf("<\n");
                if(v1==v2) printf("=\n");
            } else {
                printf("not a correct format");
                return 0;
            }
        }
    }
    return 0;
}