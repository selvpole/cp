#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main() {
    int tm, m, nd;
    float totalWorth, restWorth, restLoan;
    float d = 0, dp = 0, l = 0, interest=0;
    map<int, float> dpForm;

//    FILE *fp;
//    fp = fopen("input.txt", "r");
    while(scanf("%d %f %f %d", &tm, &dp, &l, &nd)==4, tm > 0) {
        totalWorth = dp + l;
        restWorth = totalWorth;
        restLoan = l;
        interest = l / tm;
        if (tm <= 100 && totalWorth <= 75000) {
            while (nd--) {
                if (scanf("%d %f", &m, &d) == 2) {
                    dpForm.insert(pair<int, float>(m, d));
                } else {
                    printf("print error month and depreciation format");
                    return 0;
                }
            }

            // the car was sold
            d = dpForm.find(0)->second;
            restWorth *= (1 - d);

            if(restWorth > restLoan || dp > l) {
                printf("0 months\n");
            } else {
                for (int i = 1; i <= tm; i++) {
                    if (dpForm.find(i) != dpForm.end()) {
                        d = dpForm.find(i)->second;
                    }
                    restWorth *= (1 - d);
                    restLoan -= interest;
                    if (restWorth > restLoan) {
                        if (i == 1) {
                            printf("%d month\n", i);
                            break;
                        } else {
                            printf("%d months\n", i);
                            break;
                        }
                    }
                }
            }
        } else {
            printf("total loan month > 100 or totalWorth > 75000");
        }
        dpForm.clear();
    }
//    fclose(fp);
    return 0;
}