#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cctype>
#include <cmath>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
//    FileOut(output);
    /*********************START************************/
    long double sum,diff,testCase,c1,c2,c78;

    cin >> testCase;

    while(testCase--) {
        cin >> sum >> diff;

        c1 = (int)((sum+diff)/2);
        c2 = (int)(abs(sum-diff)/2);

        if(diff>sum) cout << "impossible" << "\n";
        else if (((sum+diff)/2)-c1 > 0) {

            cout << "impossible" << "\n";
        } else
            cout << (int)((sum+diff)/2) << " " << (int)(abs(sum-diff)/2) << "\n";
    }
    
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}